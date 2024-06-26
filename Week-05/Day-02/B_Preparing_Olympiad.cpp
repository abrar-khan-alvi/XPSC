#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;



int main() {
    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin >> v[i];

    ll c = 0;

    for (ll i = 1; i < (1LL) << n; i++) {
        vector<ll> cur;

        for (ll j = 0; j < n; j++) {
            ll msk = (1LL) << j;

            if (msk & i) {
                cur.push_back(v[j]);
            }
        }

        ll sum = accumulate(cur.begin(), cur.end(), 0);
        ll diff = *max_element(cur.begin(), cur.end()) - *min_element(cur.begin(), cur.end());

        if (sum >= l && sum <= r && diff >= x) {
            c++;
        }
    }

    cout << c;

    return 0;
}
