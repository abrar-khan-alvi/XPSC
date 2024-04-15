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
ll n,sum=0;cin>>n;
for(ll i=0;i<n;i++)
{
    ll x; cin>>x;
    sum|=x;
}
cout<<sum<<endl;
}
return 0;
}