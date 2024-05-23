#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    faster;
    ll t;
    // t=1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll s = accumulate(a.begin(), a.end(), 0ll), cur = 0;
        ll ans = 1;
        for (ll i = 0; i < n - 1; i++)
        {
            cur += a[i], s -= a[i];
            ans = max(ans, __gcd(s, cur));
        }
        cout << ans << endl;
    }
    return 0;
}