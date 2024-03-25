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
        ll n;
        cin >> n;
        map<ll, ll> q;
        for (ll i = 0; i < n; ++i) {
            ll x;
            cin >> x;
            ++q[x];
        }
        ll am = 0;
        for (auto it: q) {
            am = max(am, it.second);
        }
        ll ans = 0;
        while (am < n) {
            ll d = min(n - am, am);
            ans += 1 + d;
            am += d;
        }
        cout << ans << '\n';


}
return 0;
}