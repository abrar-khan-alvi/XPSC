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
ll n; cin>>n;
vector<ll>a(n);
map<ll,ll>mp;
ll l=0,ans=0;
for(ll i=0;i<n;i++) cin>>a[i];
for(ll i=0;i<n;i++)
{
    if(mp.find(a[i])==mp.end())
    {
        mp[a[i]]=i;
    }
    else{
        if(mp[a[i]]>=l){
            l=mp[a[i]]+1;
        }
        mp[a[i]]=i;
    }
    ans=max(ans,i-l+1);
}
cout<<ans<<endl;
}
return 0;
}