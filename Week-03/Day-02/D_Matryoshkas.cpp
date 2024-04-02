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
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++) {
      cin >> a[i];
      mp[a[i]]++;
    }
    ll ans = n;
    ll last = -1;
    ll cnt = 0;
    for (auto& p : mp) {
      if (p.first == last + 1) {
        ans -= min(p.second, cnt);
      }
      last = p.first;
      cnt = p.second;
    }
    cout << ans << endl;


}
return 0;
}