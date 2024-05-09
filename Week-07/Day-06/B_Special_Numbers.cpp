#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
const int MOD = int(1e9) + 7;
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main()
{
faster;
ll t;
//t=1;
cin>>t;

while(t--){
ll n,k;
cin>>n>>k;
ll p = 1;
ll ans = 0;
for(ll j=0;j<30;j++){
    if(k & (1<<j)){
        ans = (ans + p) % MOD;
    }
    p *= n;
    p %= MOD;
}
cout<<ans<<"\n";
}
return 0;
}