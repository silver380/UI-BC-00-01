#include <iostream>
using namespace std;

const int mx = 10;

int main()
{
    int n, a[12], ma[mx][mx], mb[mx][mx], ans[mx][mx];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < mx; i++)
    {
        for (int j = 0; j < mx; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int s = 0; s < n - 2; s++)
    {

        if (s == 0)
        {

            for (int i = 0; i < a[s]; i++)
            {
                for (int j = 0; j < a[s + 1]; j++)
                {
                    cin >> ma[i][j];
                }
            }
        }
        for (int i = 0; i < a[s + 1]; i++)
        {
            for (int j = 0; j < a[s + 2]; j++)
            {
                cin >> mb[i][j];
            }
        }
        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[s + 2]; j++)
            {
                for (int k = 0; k < a[s + 1]; k++)
                {
                    ans[i][j] += (ma[i][k] * mb[k][j]);
                }
            }
        }

        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[s + 2]; j++)
            {
                ma[i][j] = ans[i][j];

                ans[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < a[0]; i++)
    {
        for (int j = 0; j < a[n - 1]; j++)
        {
            cout << ma[i][j];
            if (j != a[n - 1] - 1)
                cout << " ";
        }
        if (i != a[0] - 1)
            cout << "\n";
    }
    
    return 0;
}