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
    ll n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0;i < n;i++) {
        cin >> a[i];
    }

    unordered_map<ll, ll> mp;
    ll l = 0, r = 0;
    ll cnt = 0;

    while (r < n) {
        
        mp[a[r]]++;


        while (mp.size() > k) {
            mp[a[l]]--;
            if (mp[a[l]] == 0) {
                mp.erase(a[l]);
            }
            l++;
        }

        cnt += r - l + 1;

        r++;
    }

    cout << cnt << endl;
}
return 0;
}