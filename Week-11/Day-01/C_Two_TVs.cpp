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
        ll n;
        cin >> n;
        map<int, int> d;
        for (ll i = 1; i <= n; i++) {
            int l, r;
            cin >> l >> r;
            d[l]++;
            d[r + 1]--;
        }

        int sum = 0;
        bool ok = true;
        for (auto it : d) {
            sum += it.second;
            if (sum > 2) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
