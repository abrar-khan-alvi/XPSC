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
ll n; cin >> n;
map<ll,ll>mp;
for(ll i=0;i<n;i++){
    ll x;cin>>x;
    mp[log2(x)+1]++;
}
ll rst=0;
for(auto it:mp){
    ll temp=it.second;
    rst+=(temp*(temp-1))/2;
}
cout<<rst<<endl;

}
return 0;
}