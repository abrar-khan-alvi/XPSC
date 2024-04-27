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
t=1;
//cin>>t;

while(t--){
        ll n; cin >> n;
        vector<ll> a(n), p(n);
        for(ll i = 0; i < n; ++i) {
            cin >> a[i];
        }
        p[0]=a[0];
        for(ll i = 1; i < n; ++i) {
            p[i] = p[i-1] + a[i];
        }
        ll q;cin>>q;
        while(q--){
            ll k;cin>>k;
            cout<<lower_bound(p.begin(),p.end(),k)-p.begin()+1<<endl;
        }


}
return 0;
}