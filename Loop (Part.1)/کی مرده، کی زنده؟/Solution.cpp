#include <iostream>
using namespace std;

int main( void )
{
    int n, sum, sum_inp = 0, inp;

    cin >> n;
    sum = (n * (n + 1)) / 2;

    for (int i = 0; i < n - 1; ++i)
    {
        cin >> inp;
        
        if (inp > n)
        {
            cout << "khata! voroodi adade ziadie." << endl;
            return 0;
        }

        sum_inp += inp;
    }

    cout << sum - sum_inp << endl;
    return 0;
}