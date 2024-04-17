#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    faster;
    ll t;
    //t=1;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        sort(a.rbegin(), a.rend());
        set<ll> st;
        for (ll i = 0; i < n; i++) {
            if (st.empty()) {
                st.insert(a[i]);
            }
            else {
                ll x = *(--st.end());
                if (x >= a[i]) {
                    st.erase(--st.end());
                    st.insert(x ^ a[i]);
                }
                else st.insert(a[i]);
            }
        }
        cout << st.size() << endl;
    }
    return 0;
}
