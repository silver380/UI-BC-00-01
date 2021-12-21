#include <iostream>
using namespace std;

bool change_nums(long long *num_original, long long a, long long b);

int main()
{
    long long n, a, b;

    cin >> n >> a >> b;
    long long* nums = new long long[n];

    for (long long i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    if (change_nums(nums, a - 1, b - 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    delete[] nums;
    return 0;
}

bool change_nums(long long *num_original, long long a, long long b)
{
    long long *temp = new long long[b - a + 1];

    long long j = 0;
    for (long long i = a; i <= b; ++i)
    {
        temp[j] = num_original[i];
        j++;
    }

    for (long long i = a; i <= b; ++i)
        if (temp[--j] != num_original[i])
        {
            delete[] temp;
            return false;
        }

    delete[] temp;
    return true;
}
