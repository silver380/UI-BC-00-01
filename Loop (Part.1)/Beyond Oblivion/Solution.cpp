#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, first_num, second_num;

    cin >> t;

    while (t--)
    {
        cin >> first_num >> second_num;

        if (first_num == second_num)
            cout << first_num << " " << second_num << endl;

        else
        {
            int rev_first_num = 0, rev_second_num = 0;
            int temp1 = first_num, temp2 = second_num;
            int c = 2;

            for (int i = 0; i < 3; ++i)
            {
                rev_first_num += (temp1 % 10) * pow(10, c);
                rev_second_num += (temp2 % 10) * pow(10, c);

                temp1 /= 10;
                temp2 /= 10;
                c--;
            }

            if (rev_second_num > rev_first_num)
             cout << second_num << endl;
            
            else
                cout << first_num << endl;
        }
    }

    return 0;
}