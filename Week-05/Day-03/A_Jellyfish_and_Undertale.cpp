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
ll a,b,n;cin>>a>>b>>n;
vector<ll>v(n);
ll t=b;
for(ll i=0;i<n;i++){
    cin>>v[i];
    t+=min(v[i],a-1);
}
cout<<t<<endl;





}
return 0;
}