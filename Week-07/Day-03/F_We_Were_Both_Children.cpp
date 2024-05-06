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
ll n; cin >> n;
vector<ll> cnt(n + 1, 0), mx(n + 1, 0);
for(ll i = 0; i < n; ++i) {
    ll x; cin >> x;
    if(x <= n) ++cnt[x];
}
for(ll i = 1; i <= n; ++i) {
    for(ll j = i; j <= n; j += i) 
        mx[j] += cnt[i];
}
cout << *max_element(mx.begin(),mx.end()) << "\n";

}
return 0;
}