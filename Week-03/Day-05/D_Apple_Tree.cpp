#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

vector<ll> v[2000005];
ll cnt[2000005];

void dfs(ll node, ll p)
{
    if (v[node].size() == 1 && node != 1)
        cnt[node] = 1;

    for (ll child : v[node])
    {
        if (child != p)
        {
            dfs(child, node);
            cnt[node] += cnt[child];
        }
    }
}

int main()
{
    faster;
    ll t;
    // t=1;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;
        for (ll i = 0; i <= n; i++)
        {
            cnt[i] = 0;
            v[i].clear();
        }
        for (ll i = 1; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        dfs(1, -1);
        ll q;
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            cout << cnt[x] * cnt[y] << endl;
        }
    }
    return 0;
}