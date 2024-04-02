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
    cin>>t;

    while(t--){
        ll n,k,q; 
        cin>>n>>k>>q;
        ll cnt=0, ans=0;
        
        for(ll i=0; i<n; i++){
            ll x; 
            cin>>x;
            if(x<=q) 
                cnt++;
            else {
                if(cnt>=k){
                    ans += (cnt - k + 1) * (cnt - k + 2) / 2;
                }
                cnt=0;
            }
        }

        if(cnt >= k)
            ans += (cnt - k + 1) * (cnt - k + 2) / 2;

        cout<<ans<<endl;
    }
    return 0;
}
