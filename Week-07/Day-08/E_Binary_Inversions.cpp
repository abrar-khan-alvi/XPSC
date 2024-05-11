#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

ll F(vector<ll>v)
{
    ll s=0,c=0;
    for(ll i=v.size()-1;i>=0;i--)
    {
        if(v[i]==0)c++;
        else s+=c;
    }
    return s;
}

int main()
{
faster;
ll t;
//t=1;
cin>>t;

while(t--){
ll n;
cin>>n;
vector<ll>v(n),v1,v2;
for(ll i=0;i<n;i++)cin>>v[i];
v1=v2=v;
for(ll i=0;i<n;i++)
{
    if(v1[i]==0)
    {
        v1[i]^=1;
        break;
    }
}
for(ll i=n-1;i>=0;i--)
{
    if(v2[i]==1)
    {
        v2[i]^=1;
        break;
    }
}
ll mx=F(v1);
mx=max(F(v),mx);
mx=max(F(v2),mx);
cout<<mx<<endl;

}
return 0;
}