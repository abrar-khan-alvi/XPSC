#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

ll N = 1e4;

int main() {
    faster;
    vector<ll> a;
    for (ll i = 1; i <= N; i++) {
        a.push_back(pow(i, 3));
    }
    ll t;
    cin >> t;

    while (t--) {
        ll x,fo=0;cin>>x;
        for(ll i=0;i<N;i++){
            ll l=0,r=N-1,need=x-a[i],f=0;

            while(l<=r){
                ll m = (l+r)/2;
                if(a[m]==need) {
                    f=1;
                    break;
                }
                else if(a[m]>need){
                    r=m-1;
                }
                else l=m+1;

            }
            if(f==1){
                fo=1;
                break;
            }   
        }
        if(fo) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
