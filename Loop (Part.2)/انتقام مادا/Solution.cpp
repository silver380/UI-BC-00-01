#include <iostream>
using namespace std;

int sum_digits(int a)
{
    int sd = 0;

    while (a)
    {
        sd += a % 10;
        a /= 10;
    }

    return sd;
}

int main()
{
    int t, num;

    cin >> t;

    while (t--)
    {
        cin >> num;
        while (num % 10 != num)
            num = sum_digits(num);
        
        cout << num << endl;
    }
    
    return 0;
}