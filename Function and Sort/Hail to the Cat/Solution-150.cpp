#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, temp = 0, count = 0, sum = 0;
    int *nums = nullptr;

    cin >> n;
    nums = new int[n];

    for (long long i = 0; i < n; ++i)
    {
        cin >> nums[i];
        sum += nums[i];
    }

    for (long long i = 0; i < n - 1; ++i)
    {
        long long max_ind = i;
        for (long long j = i + 1; j < n; ++j)
        {
            if (nums[j] > nums[max_ind])
                max_ind = j;
        }

        long long temp = nums[max_ind];
        nums[max_ind] = nums[i];
        nums[i] = temp;
    }
    
    // sort(nums, nums + n, greater<int>());

    for (long long i = 0; i < n; ++i)
    {
        temp += nums[i];
        count++;

        if (temp > (sum - temp))
            break;
    }

    cout << count << endl;
    return 0;
}