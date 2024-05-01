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
ll a,b,n;cin>>n>>a>>b;

ll l=1,r=min(a,b),ans=1;
while(l<=r){
    ll m=(l+r)/2;
    if(((a/m)+(b/m))>=n){
        l=m+1;
        ans=m;
    }
    else{
        r=m-1;
    }
}
cout<<ans<<endl;
}
return 0;
}