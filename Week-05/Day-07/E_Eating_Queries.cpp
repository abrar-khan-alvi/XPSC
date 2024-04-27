#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main()
{
faster;
ll t;
//t=1;
cin>>t;

while(t--){
        ll n, q; cin >> n >> q;
        vector<ll> a(n), p(n);
        for(ll i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        p[0]=a[0];
        for(ll i = 1; i < n; ++i) {
            p[i] = p[i-1] + a[i];
        }
    
        while(q--) {
            ll x; cin >> x;
            ll l = 1, r = n, ans = -1;
            while(l <= r) {
                ll mid = (l + r) / 2;
                if(p[mid - 1] >= x) {
                    ans = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            cout << ans << endl;
        }


}
return 0;
}