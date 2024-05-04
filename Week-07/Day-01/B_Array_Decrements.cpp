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
    
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    ll l = 0, r = INT_MAX;
    for (ll i = 0; i < n; i++) {
        if (b[i] == 0) {
            l = max(l, a[i]);
        } else {
            l = max(l, a[i] - b[i]);
            r = min(r, a[i] - b[i]);
        }
    }
    
    if (l <= r) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }


}
return 0;
}