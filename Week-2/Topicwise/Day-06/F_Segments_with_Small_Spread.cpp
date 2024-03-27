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
    ll l = 0, r = 0, ans = 0;
    multiset<long long> ml;

    while (r < n) {
        ml.insert(a[r]);
        long long mn, mx;
        mn = *ml.begin(), mx = *ml.rbegin();
        if ((mx - mn) <= k) {
            ans += (r - l + 1);
        }
        else {
            while (l < r) {
                mn = *ml.begin(), mx = *ml.rbegin();
                if ((mx - mn) <= k) {
                    break;
                }
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if ((mx - mn) <= k) {
                ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << endl;


}
return 0;
}