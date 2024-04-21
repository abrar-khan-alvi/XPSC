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

    for (ll seq = 1; seq < (1LL) << n; seq++) {
        vector<ll> cur;

        for (ll bit = 0; bit < n; bit++) {
            ll msk = (1LL) << bit;

            if (msk & seq) {
                cur.push_back(v[bit]);
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
