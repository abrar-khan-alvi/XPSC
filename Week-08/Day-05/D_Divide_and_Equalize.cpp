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
ll n;cin>>n;
map<ll, ll> mp;
for(ll i=0;i<n;i++)
{
    ll x;cin>>x;
    ll j=2;
    while(j*j<=x)
    {
        while(x%j==0)
        {
            mp[j]++;
            x/=j;
        }
        j++;
    }
if(x>1) mp[x]++;
}
ll f=0;
for(auto it:mp)
{
    if(it.second%n!=0)
    {
        f=1;
        break;
    }
}
if(f) cout<<"NO"<<endl;
else cout<<"YES"<<endl;

}
return 0;
}