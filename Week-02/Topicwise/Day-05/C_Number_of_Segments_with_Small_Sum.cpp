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
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    for (ll i = 0;i < n;i++) {
        cin >> a[i];
    }

    ll l = 0, r = 0, ans = 0, sum = 0;

    while (r < n) {
        sum += a[r];
        if (sum <= s) {
            ans += (r - l + 1);
        }
        else {
            while (sum > s && l < r) {
                sum -= a[l];
                l++;
            }
            if (sum <= s) {
                ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << endl;


}
return 0;
}