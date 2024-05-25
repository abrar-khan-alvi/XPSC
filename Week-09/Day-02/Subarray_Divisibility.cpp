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
ll n,sum=0; cin>>n;
vector<ll>a(n);
a[sum]=1;
for(ll i=0;i<n;i++)
{
    ll x;cin>>x;
    sum+=x;
    a[(sum%n+n)%n]++;
}
ll ans=0;
for(auto it:a)
{
    ans+=(it*(it-1)/2);
}
cout<<ans<<endl;

}
return 0;
}