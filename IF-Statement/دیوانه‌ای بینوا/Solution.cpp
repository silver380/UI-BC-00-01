#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int max, min, mid;

    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        max = a;

        if (b > c)
        {
            mid = b;
            min = c;
        }

        else
        {
            mid = c;
            min = b;
        }
    }

    else if (b > a && b > c)
    {
        max = b;

        if (a > c)
        {
            mid = a;
            min = c;
        }
        else
        {
            mid = c;
            min = a;
        }
    }

    else
    {
        max = c;
        if (a > b)
        {
            mid = a;
            min = b;
        }
        else
        {
            mid = b;
            min = a;
        }
    }

    cout << max << " " << min << " " << mid << endl;

    if (a > 0 && b > 0 && c > 0)
        cout << "All is light" << endl;

    else if (a <= 0 && b <= 0 && c <= 0)
        cout << "All is Dark" << endl;

    else
        cout << "Light and Dark" << endl;

    if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
        cout << "All is Even" << endl;

    else if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0)
        cout << "All is Odd" << endl;

    else
        cout << "Even and Odd" << endl;

    return 0;
}