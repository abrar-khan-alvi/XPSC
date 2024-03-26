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

    ll sum = 0;
    ll l = 0, r = 0, ans = 0;

    while (r < n) {
        sum += a[r];
        if (sum <= s) {
            ans = max(ans, r - l + 1);
        }
        else {
            sum -= a[l];
            l++;
        }
        r++;
    }

    cout << ans << endl;


}
return 0;
}