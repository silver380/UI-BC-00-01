#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, d;
    cin >> n >> d;
    std::vector<ll> num(n);

    for (ll i = 0; i < n; i++)
        cin >> num[i];

    sort(num.begin(), num.end());
    
    cout << (num[0] + num[1] <= d ? "YES" : "NO") << endl;

    return 0;
}