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
ll n,x;cin>>n>>x;
vector< pair<ll,ll> >a;
for(ll i=0;i<n;i++)
{
    ll k;cin>>k;
    a.push_back({k,i+1});
}
sort(a.begin(),a.end());

for(ll i=0;i<n;i++)
{
    ll l=i+1,r=n-1;
    ll temp=x-a[i].first;
    while(l<r)
    {
        if(a[l].first+a[r].first==temp)
        {
            cout<<a[i].second<<" "<<a[l].second<<" "<<a[r].second<<endl;
            return 0;
        }
        if(a[l].first+a[r].first<temp)
        {
            l++;
        }
        else r--;
    }
}
cout<<"IMPOSSIBLE"<<endl;
}
return 0;
}