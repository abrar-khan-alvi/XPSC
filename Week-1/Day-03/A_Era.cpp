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
ll n,ans=0;cin>>n;
ll a[n];
for(ll i=1;i<=n;i++){
    ll x;cin>>x;
    
   if(x>i){
     //cout<<x<<endl;
    ans=max(ans,x-i);
   }
}

cout<<ans<<endl;



}
return 0;
}