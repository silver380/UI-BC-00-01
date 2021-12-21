#include <iostream>
using namespace std;

int main()
{
    long long t, *arr = nullptr, n, sum, max_sum;

    cin >> t;

    while (t--)
    {
        max_sum = 0;
        cin >> n;
        arr = new long long[n];

        for (long long i = 0; i < n; ++i)
            cin >> arr[i];
        
        for (long long i = 0; i < n; ++i)
        {
            sum = 0;
            for (long long j = i; j < n; ++j)
            {
                sum += arr[j];
                if (sum > max_sum)
                    max_sum = sum;
            }
        }

        cout << max_sum << endl;
        delete[] arr;
        arr = nullptr;
    }

    return 0;
}