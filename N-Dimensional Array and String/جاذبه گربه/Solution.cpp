// by: Pouria.T
#include <iostream>
using namespace std;

int main(void)
{

    char a[10000][50];
    int r, c;
    cin >> r;
    cin >> c;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    bool jazebe = false;
    while (jazebe == false)
    {
        jazebe = true;
        for (int j = 0; j < c; j++)
            for (int i = 0; i < r - 1; i++)
            {
                if (a[i][j] == 'a' && a[i + 1][j] == '.')
                {
                    char t = a[i + 1][j];
                    a[i + 1][j] = a[i][j];
                    a[i][j] = t;
                    jazebe = false;
                }
            }
    }

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            cout << a[i][j];
            if (j == c - 1)
                cout << endl;
        }
        
    return 0;
}
