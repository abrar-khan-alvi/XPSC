#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main()
{
    faster;
    ll t;
    //t=1;
    cin >> t;
    vector<ll> po(32);
    for (ll i = 0; i < 32; i++)
        po[i] = (ll)1 << i;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n), v1;
        for (ll i = 0; i < n; i++) cin >> v[i];
        ll y = 31;
        for (ll i = 0; i < m; i++) {
            ll x;
            cin >> x;
            if (x < y) {
                v1.push_back(x);
                y = x;
            }
        }
        for (ll i = 0; i < v1.size(); i++) {
            for (ll j = 0; j < n; j++) {
                if (v[j] % po[v1[i]] == 0) v[j] += po[v1[i] - 1];
            }
        }
        for (ll i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
