#include <bits/stdc++.h>
#define ll long long int
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll gc1 = 0, gc2 = 0;
        for (ll i = 0; i < n; i += 2) {
            gc1 = __gcd(gc1, a[i]);
        }
        for (ll i = 1; i < n; i += 2) {
            gc2 = __gcd(gc2, a[i]);
        }
        
        bool validGc1 = true, validGc2 = true;
        for (ll i = 1; i < n; i += 2) {
            if (a[i] % gc1 == 0) {
                validGc1 = false;
                break;
            }
        }
        for (ll i = 0; i < n; i += 2) {
            if (a[i] % gc2 == 0) {
                validGc2 = false;
                break;
            }
        }
        
        if (validGc1 && validGc2) {
            cout << max(gc1, gc2) << endl;
        } else if (validGc1) {
            cout << gc1 << endl;
        } else if (validGc2) {
            cout << gc2 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
