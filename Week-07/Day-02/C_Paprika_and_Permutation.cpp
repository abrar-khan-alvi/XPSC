#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll t;
    cin >> t;

    while (t--) {
        ll n; 
        cin >> n;
        vector<ll> a;
        set<ll> st;
        for (ll i = 1; i <= n; i++) st.insert(i);

        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (st.find(x) != st.end()) st.erase(x);
            else a.push_back(x);
        }
        sort(a.rbegin(), a.rend());
        bool f = false;
        for (auto it : a) {
            auto pt = st.end();
            pt--;
            ll temp = *pt;
            if (temp > (it - 1) / 2) {
                f = true;
                break;
            }
            st.erase(temp);
        }

        if (f) cout << -1 << endl;
        else cout << a.size() << endl;
    }
    return 0;
}
