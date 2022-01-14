// by: Mohammad Mazrouei
#include <iostream>
using namespace std;

int main()
{
    char a;
    char words[65];

    cin.getline(words, 65);

    int i1 = 0, i2 = 0;
    for (int i = 0; i < 65; i++) //  snake_case
    {
        char w = words[i];
        if (w == 0)
            break;
        if (i == i1 && w <= 57 && w >= 48)
            i1++;
        if ((w <= 122 && w >= 97) || (w <= 57 && w >= 48))
        {
            cout << w;
            i2 = 1;
        }
        if (w <= 90 && w >= 65)
        {
            cout << char(w + 32);
            i2 = 1;
        }
        if (w == 32 && words[i - 1] != 32 && i2)
            cout << "_";
    }
    cout << endl;

    int j1 = 0, j2 = 0, j3 = 0;
    for (int j = 0; j < 65; j++) //  camelCase
    {
        char w = words[j];
        if (w == 0)
            break;
        if (j == j1 && w <= 57 && w >= 48)
            j1++;
        if ((w <= 122 && w >= 97) && (j2))
        {
            cout << char(w - 32);
            j2 = 0;
        }
        else if ((w <= 90 && w >= 65) && (j2))
        {
            cout << w;
            j2 = 0;
        }
        else if ((w <= 122 && w >= 97) || (w <= 57 && w >= 48))
        {
            cout << w;
            j3 = 1;
        }
        else if (w <= 90 && w >= 65)
        {
            cout << char(w + 32);
            j3 = 1;
        }
        if (w == 32 && j3)
            j2 = 1;
    }
    cout << endl;

    int k1 = 0, k2 = 1;
    for (int k = 0; k < 65; k++) //  PascalCase
    {
        char w = words[k];
        if (w == 0)
            break;
        if (k == k1 && w <= 57 && w >= 48)
            k1++;
        if ((w <= 122 && w >= 97) && (k2))
        {
            cout << char(w - 32);
            k2 = 0;
        }
        else if ((w <= 90 && w >= 65) && (k2))
        {
            cout << w;
            k2 = 0;
        }
        else if ((w <= 122 && w >= 97) || (w <= 57 && w >= 48))
            cout << w;
        else if (w <= 90 && w >= 65)
            cout << char(w + 32);
        if (w == 32)
            k2 = 1;
    }
    cout << endl;

    return 0;
}
