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
k%=(n+1);
vector<ll>v(n),v1(n+1,1);
for(ll i=0;i<n;i++)
{
    cin>>v[i];
    v1[v[i]]=0;
}
ll x;
for(ll i=0;i<=n;i++)if(v1[i]) x=i;
v.push_back(x);
ll y=n-k+1;
if(y>n)y=0;
ll c=n;
while(c--)
{
    cout<<v[y++]<<" ";
    if(y>n)y=0;
}
cout<<endl;


}
return 0;
}