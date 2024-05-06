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
ll n,k;cin>>n>>k;
vector<ll>a(n),b(n);
for(ll i=0;i<n;i++)
{
    ll x;cin>>x;
    if(x>=0)
    {
        a.push_back(x);
    }
    else
    {
        b.push_back(-x);
    }
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
ll rst=0;
for(ll i=a.size()-1;i>=0;i-=k)
{
    rst+=2*a[i];
}
for(ll i=b.size()-1;i>=0;i-=k)
{
    rst+=2*b[i];
}
//rst-=max(a.empty()?0:a.back(),b.empty()?0:b.back());
if(a.size()>0 && b.size()>0)
{
    rst-=max(a.back(),b.back());
}
cout<<rst<<endl;
}
return 0;
}