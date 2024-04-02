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
ll n;cin>> n;
ll a[n];
for(ll i=0;i<n;i++) cin>>a[i];
vector<ll>v;
ll sum=0;
for(ll i=0;i<n;i++){
    if(a[i]==0 && v.size()>0){
        sort(v.begin(),v.end());
        ll len=v.size()-1;
        sum+=v[len];
        //cout<<sum<<endl;
        //cout<<v[len]<<endl;
        //v.clear();
        v.pop_back();
    }
    else v.push_back(a[i]);
}
cout<<sum<<endl;
}
return 0;
}