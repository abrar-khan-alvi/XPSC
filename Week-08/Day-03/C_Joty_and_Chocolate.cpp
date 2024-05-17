#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}


int main()
{
faster;
ll t;
t=1;
//cin>>t;

while(t--){
ll n, a, b, p, q; cin>>n>>a>>b>>p>>q;

ll ans = 0;
ans += (n / a) * p;
ans += (n / b) * q;
ans -= (n / lcm(a, b)) * min(p, q);
cout << ans << endl;

}
return 0;
}