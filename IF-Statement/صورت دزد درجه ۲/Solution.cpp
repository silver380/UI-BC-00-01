#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if (!a && !b)
        cout << "Error!" << endl;

    else if (!a && b)
    {
        double ans = (-c) / b;
        cout << fixed;
        cout << setprecision(6) << ans << endl;
    }

    else
    {
        int delta = (b * b) - (4 * a * c);

        if (delta < 0)
            cout << "Error!" << endl;

        else if (!delta)
        {
            double ans = (-b) / (2 * a);
            cout << fixed;
            cout << setprecision(6) << ans << endl;
        }

        else
        {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);

            cout << fixed;
            cout << setprecision(6) << x1 << endl
                 << x2 << endl;
        }
    }

    return 0;
}