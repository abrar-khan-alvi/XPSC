#include<bits/stdc++.h>
#define ll long long int
#define ld long double
using namespace std;
 
 
int main()
{
ll t;
cin>>t;
while(t--){
vector<ll> v(1001,0);
ll n;
cin>>n;
ll m=-1;
for(ll i=1;i<=n;i++){
    ll temp;
    cin>>temp;
    v[temp]=i;
}
for(ll i=1;i<=1000;i++){
    for(ll j=1;j<=1000;j++){
        if(v[i] && v[j] && (__gcd(i,j))==1){
            m=max(m,v[i]+v[j]);
        }
    }
}
cout<<m<<endl;
}
return 0;
}