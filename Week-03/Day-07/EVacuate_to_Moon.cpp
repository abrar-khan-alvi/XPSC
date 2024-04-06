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
ll n,m,h;
cin>>n>>m>>h;
vector<ll>a(n),b(m);
for(ll i=0;i<n;i++) cin>>a[i];
for(ll i=0;i<m;i++) cin>>b[i];

sort(a.rbegin(),a.rend());
sort(b.rbegin(),b.rend());


ll s=0;
for(ll i=0;i<min(n,m);i++){
    s+=min(b[i]*h,a[i]);
    //cout<<b[i]<<" "<<a[i]<<endl;
}

cout<<s<<endl;


}
return 0;
}