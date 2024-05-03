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

    while(t--) {
        ll k, n;
        cin >> k >> n; 
        
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll sum = 0;
        for (ll i = 0; i < n; ++i) {
            sum += a[i]; 
        }

        ll maxP = sum / k; 
        ll maxC = 0; 

        while (maxP > 0) {
            ll councilCount = 0;
            for (ll i = 0; i < n; ++i) {
                councilCount += a[i] / maxP; 
            }
            if (councilCount >= k) {
                maxC = maxP; break;
            }
            maxP--; 
        }
        cout << maxC+2 << endl; 
        }
    return 0;
}
