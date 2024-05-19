#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
faster;
ll t;
cin >> t;
while (t--) {
ll n;
cin >> n;
vector<ll> a(n);
for (ll i = 0; i < n; i++) cin >> a[i];
vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
vector<ll> ans(n, -1);
ll cnt = 0;
for (auto it : prime) {
    bool used = false;
    for (ll i = 0; i < n; i++) {
        if (ans[i] == -1 && a[i] % it == 0) {
            if (!used) {
                used = true;
                cnt++;
            }
            ans[i] = cnt; 
        }
    }
}
cout << cnt << endl; 
for (ll i = 0; i < n; i++) {
    cout << ans[i] << " ";
}
cout << endl;
}
return 0;
}
