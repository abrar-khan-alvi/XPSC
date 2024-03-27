#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll t = 1;
    //cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        ll s;
        cin >> s;
        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll minLength = LLONG_MAX;
        ll sum = 0;
        ll l = 0;
        for (ll r = 0; r < n; r++) {
            sum += a[r];
            while (sum >= s) {
                minLength = min(minLength, r - l + 1);
                sum -= a[l++];
            }
        }

        if (minLength == LLONG_MAX)
            cout << -1 << endl;
        else
            cout << minLength << endl;
    }
    return 0;
}
