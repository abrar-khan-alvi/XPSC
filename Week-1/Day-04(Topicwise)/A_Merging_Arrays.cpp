#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll t;
    t = 1;
    //cin>>t;

    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m), c;
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < m; i++) cin >> b[i];

        
        ll i = 0, j = 0;
        while (i < n && j < m) {
            if (a[i] < b[j]) {
                c.push_back(a[i]);
                i++;
            } else {
                c.push_back(b[j]);
                j++;
            }
        }
        while (i < n) {
            c.push_back(a[i]);
            i++;
        }
        while (j < m) {
            c.push_back(b[j]);
            j++;
        }

        for (auto it: c) cout << it << " ";
    }
    return 0;
}
