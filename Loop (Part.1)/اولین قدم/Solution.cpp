#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, prime;
    bool first = true, flag;

    cin >> a >> b;

    for (int n = a; n <= b; ++n)
    {
        flag = false;

        if (n == 1)
            continue;

        else if (n == 2 || n == 3)
            prime = n;

        else if (!(n % 2) || !(n % 3))
            continue;

        else
        {
            for (int j = 5; j * j <= n; j += 6)
                if (!(n % j) || !(n % (j + 2)))
                {
                    flag = true;
                    break;
                }

            if (flag)
                continue;
            else
                prime = n;
        }

        if (first)
        {
            cout << prime;
            first = false;
        }
        else
            cout << "," << prime;
    }
    return 0;
}