#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    faster;
    ll t;

    cin >> t;

    while (t--)
    {
        ll n, i, j, m;
        cin >> n;
        ll ans[n + 1];

        vector<ll> pos[n + 1];

        m = n;

        while (m--)
        {
            for (i = 1; i <= n - 1; i++)
            {
                cin >> j;
                pos[j].push_back(i);
            }

            
        }

        for (i = 1; i <= n; i++)
        {
            sort(pos[i].begin(), pos[i].end());
        }

        for (i = 1; i <= n; i++)
        {
            if (pos[i][n - 2] == n - 1)
            {
                if (pos[i][0] == n - 1)
                {
                    ans[n] = i;
                }
                else
                {
                    ans[n - 1] = i;
                }
            }
            else
            {
                ans[pos[i][n - 2]] = i;
            }
        }

        for (i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}