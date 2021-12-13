#include <iostream>
using namespace std;

int main()
{
    int n;
    long long sum = 0, sum_each;

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        sum_each = i;
        for (int j = 1; j < i; j++)
        {
            sum_each += j;
            cout << j << "+";
        }
        cout << i << " = " << sum_each << endl;
        sum += sum_each;
    }

    cout << "Total sum of series is: " << sum << endl;
    return 0;
}