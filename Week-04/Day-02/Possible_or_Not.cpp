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
ll n,k;
cin>>n>>k;
int rst= -1;
for(ll i=0;i<n;i++){
    //cin>>a[i];
    ll x;cin>>x;
    if((x&k)==k){
        rst&=x;
    }
}
if(rst==k) cout<<"YES"<<endl;
else cout<<"NO"<<endl;


}
return 0;
}