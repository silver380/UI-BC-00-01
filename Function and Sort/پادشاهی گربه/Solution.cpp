#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.size();
    for (int i = 0, x = 0; i < n; i++)
    {
        x = i;
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] <= s[x])
            {
                x = j;
            }
        }
        if (s[x] < s[i])
        {
            swap(s[x], s[i]);
            break;
        }
    }
    if (s < t)
        cout << s << endl;
    else
        cout << "---" << endl;

    return 0;
}
