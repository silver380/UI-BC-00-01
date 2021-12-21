#include <iostream>
using namespace std;

int main()
{

    long inp;
    cin >> inp;

    char *ch = (char *)&inp;

    cout << *ch;
    cout << *(++ch);
    cout << *(++ch);
    cout << *(++ch);

    return 0;
}
