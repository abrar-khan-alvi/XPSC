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
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    map<tuple<ll, ll, ll>, ll> mp;
    ll ans = 0;
    
    for (ll i = 0; i < n - 2; i++) {
        tuple<ll, ll, ll> triplet = make_tuple(a[i], a[i + 1], a[i + 2]);
        vector<tuple<ll, ll, ll>> mist(3);
        mist[0] = make_tuple(0, a[i + 1], a[i + 2]);
        mist[1] = make_tuple(a[i], 0, a[i + 2]);
        mist[2] = make_tuple(a[i], a[i + 1], 0);

        for (auto trip : mist) {
            ans += mp[trip] - mp[triplet];
            mp[trip]++;
        }
        mp[triplet]++;
    }
    
    cout << ans << endl;


}
return 0;
}