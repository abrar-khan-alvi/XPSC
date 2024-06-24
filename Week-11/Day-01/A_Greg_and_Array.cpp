#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(yo) (ll)yo.size()

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (ll i = 0;i < n;i++)
        cin >> a[i];
    vector<tuple<ll, ll, ll>> ap;
    for (ll i = 0;i < m;i++)
    {
        ll l, r, d;
        cin >> l >> r >> d;
        ap.push_back(make_tuple(l, r, d));
    }
    vector<ll> diff(n + 1), diffQ(m + 1);
    for (ll i = 0;i < k;i++)
    {
        ll x, y;
        cin >> x >> y;
        x--, y--;
        diffQ[x] += 1;
        diffQ[y + 1] -= 1;
    }
    vector<ll> pref(m + 1), ans(n + 1);
    for (ll i = 1;i <= m;i++)
        pref[i] = pref[i - 1] + diffQ[i - 1];
    for (ll i = 1;i <= m;i++)
    {
        tuple<ll, ll, ll> t = ap[i - 1];
        ll l, r, d;
        l = get<0>(t);
        r = get<1>(t);
        d = get<2>(t);
        l--, r--;
        diff[l] += (d * pref[i]);
        diff[r + 1] -= (d * pref[i]);
    }
    for (ll i = 1;i <= n;i++)
    {
        ans[i] = ans[i - 1] + diff[i - 1];
        cout << (ans[i] + a[i - 1]) << " ";
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    t = 1;
    // cin >> t;
    for (ll cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        solve();
    }
    return 0;
}
