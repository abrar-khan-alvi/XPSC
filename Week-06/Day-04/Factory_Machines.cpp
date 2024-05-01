#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, t;
    cin >> n >> t;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    
    ll l = 0, r = 1e18;
    ll ans = 1e18;
    
    while (l <= r) {
        ll m = (l + r) / 2; // this is the potential minimum time to check
        ll pro = 0; // products that can be made in `m` seconds
        for (ll i = 0; i < n; i++) {
            pro += m / a[i];
            if (pro >= t) break; // we can stop early if we have reached the needed products
        }
        
        if (pro >= t) { // if we can make enough products in `m` seconds
            ans = m; // update answer
            r = m - 1; // try to find a smaller maximum time
        } else {
            l = m + 1; // if not enough products can be made, increase the time
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
