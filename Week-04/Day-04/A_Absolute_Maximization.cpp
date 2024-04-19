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

    ll ans = 0;
    for(ll bit = 0; bit <= 12; bit++) {
        ll cnt1 = 0, cnt0 = 0;
        for(ll i = 0; i < n; i++) {
            if(a[i] & (1ll << bit))
                cnt1++;
            else
                cnt0++;
        }
        if(cnt1 > 0 && cnt0 > 0) {
            ans |= (1ll << bit);
        }
    }
    cout << ans << endl;



}
return 0;
}