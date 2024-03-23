#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll t;
    cin >> t;

    while(t--) {
        ll n, m;
        cin >> n >> m;
        vector<string> v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll ans = INT_MAX;
        for(ll i = 0; i < n; ++i) {
            for(ll j = i + 1; j < n; ++j) {
                ll val = 0;
                for(ll k = 0; k < v[i].size(); ++k) {
                    val += abs(v[i][k] - v[j][k]);
                }
                ans = min(ans, val);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
