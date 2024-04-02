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
vector<pair<ll,ll> > v1,v2,v3;
ll n;cin>>n;
for(ll i=0;i<n;i++) {
    ll x;cin>>x;
    v1.push_back({x,i});
}
for(ll i=0;i<n;i++) {
    ll x;cin>>x;
    v2.push_back({x,i});
}
for(ll i=0;i<n;i++) {
    ll x;cin>>x;
    v3.push_back({x,i});
}
sort(v1.begin(),v1.end(), greater <> ());
sort(v2.begin(),v2.end(), greater <> ());
sort(v3.begin(),v3.end(), greater <> ());
//for(auto it:v1) cout<<it.first<< " " <<it.second<<endl;
ll rst=0;
for(ll i=0;i<3;i++){
    for(ll j=0;j<3;j++){
        for(ll k=0;k<3;k++){
            if(v1[i].second!=v2[j].second && v2[j].second!=v3[k].second && v1[i].second!=v3[k].second){
                rst=max(v1[i].first+v2[j].first+v3[k].first,rst);
            }
        }
    }
}
cout<<rst<<endl;

}
return 0;
}