#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, *arr = nullptr, n, sum, max_sum;
    cin >> t;

    while (t--)
    {
        max_sum = 0;
        sum = 0;
        cin >> n;
        arr = new long long[n];

        for (long long i = 0; i < n; ++i)
            cin >> arr[i];

        for (long long i = 0; i < n; ++i)
        {
            sum += arr[i];
            if (max_sum < sum)
                max_sum = sum;

            if (sum < 0)
                sum = 0;
        }

        cout << max_sum << endl;
        delete[] arr;
        arr = nullptr;
    }

    return 0;
}