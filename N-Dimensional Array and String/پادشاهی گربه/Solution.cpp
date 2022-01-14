// by: Mohammad Mazrouei
#include <iostream>
using namespace std;

int main()
{
    string a;
    
    while (true)
    {
        cin >> a;
        if (a == "CAPS")
        {
            while (true)
            {
                cin >> a;
                if (a == "END")
                    break;
                if (a == "CAPS")
                {
                    cin >> a;
                    break;
                }
                cout << char(*(&a[0]) - 32);
            }
        }
        
        if (a == "END")
            break;
        cout << a;
    }
    
    cout << endl;

    return 0;
}
