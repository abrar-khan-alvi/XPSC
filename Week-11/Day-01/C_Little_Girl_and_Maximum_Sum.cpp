#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll t;
    //cin >> t;
    t = 1;

    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> d(n + 1, 0);
        for (ll i = 1; i <= q; i++) {
            ll l, r;
            cin >> l >> r;
            l--, r--;
            d[l]++;
            d[r + 1]--;
        }

        for (ll i = 1; i < n; i++) {
            d[i] += d[i - 1];
        }
        d.pop_back(); 
        sort(a.rbegin(), a.rend());
        sort(d.rbegin(), d.rend());

        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            ans += (1LL * d[i] * a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
