#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll t;
    t = 1;
    // cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for (ll i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        for (ll i = 0; i < k; ++i) {
            ll q;
            cin >> q;
            auto it = lower_bound(arr.begin(), arr.end(), q)-arr.begin();
            cout << it+1<< endl;
        }
    }
    return 0;
}
