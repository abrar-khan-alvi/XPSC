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
ll x;
cin >> x;
ll ans;
for(ll i = 1 ; i * i <= x ; i++){
    if(x % i == 0 && lcm(i, x / i) == x){
        ans = i;
    }
}
cout << ans << " " << x / ans << endl;
}
return 0;
}