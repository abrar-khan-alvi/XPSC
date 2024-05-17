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
ll n;
cin>>n;
ll f=1;
for(ll i=2;i<=(n+1);i++)
{
ll x;
cin>>x;
if(!f)continue;
ll y=1;
for(ll j=i;j>1;j--)
{
if(x%j!=0)
{
    y=0;
    break;
}
}
if(y)f=0;
}
if(f)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}