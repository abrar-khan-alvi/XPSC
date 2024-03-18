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
    // cin>>t;

    while(t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m);
        
        for(ll i = 0; i < n; i++)
            cin >> a[i];
        
        for(ll i = 0; i < m; i++)
            cin >> b[i];
        
        ll sum = 0;

        ll i = 0, j = 0;
        while (i < n && j < m) {
            if (a[i] < b[j]) {
                i++;
            } else if (a[i] > b[j]) {
                j++;
            } else {
                ll cntA = 0, cntB = 0;
                while (i < n && a[i] == b[j]) {
                    cntA++;
                    i++;
                }
                while (j < m && b[j] == a[i - 1]) {
                    cntB++;
                    j++;
                }
                sum += cntA * cntB;
            }
        }

        cout << sum << endl;
    }
    return 0;
}
