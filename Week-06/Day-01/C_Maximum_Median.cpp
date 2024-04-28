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
ll n,k; cin>>n>>k;
vector<ll>a(n);
for(ll i=0;i<n;i++) cin>>a[i];
sort(a.begin(),a.end());
auto ok=[&](ll m){
    ll cnt=0;
    for(ll i=(n/2);i<n;i++){
        if(a[i]<m) cnt+=m-a[i];
    }
    return cnt<=k;
};
ll l=1,r=2e9,rst=0;
while(l<=r){
    ll m=(l+r+1)/2;
    if(ok(m)){
        rst=m;
        l=m+1;
    }
    else {
        r=m-1;
    }
}
cout<<rst<<endl;
}
return 0;
}