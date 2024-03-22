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
ll n,k;cin>>n>>k;
vector<ll>v;
for(ll i=0;i<n;i++){
    ll x;cin>>x;
    if(x!=k) v.push_back(x);
}
for(auto it:v){
    cout<<it<<" ";
}


}
return 0;
}