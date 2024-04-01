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
map<ll,ll>mp;
for(ll i=1;i<=100000;i++){
    mp[i]=0;
}
while(t--){
ll n;cin>>n;
for(ll i=0;i<n;i++){
    ll x;cin>>x;
    mp[x]++;
}
for(auto it:mp){
    if(it.second==0){
        cout<<it.first<<endl;
        break;
    }
}


}
return 0;
}