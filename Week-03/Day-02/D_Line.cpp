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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        vector<ll> dispatch;
        ll total = 0;
        int minimumChange = 0;
        for (int i = 0; i < n; i++)
        {
            ll L = i;
            ll R = n - i - 1;
            if (a[i] == 'L')
            {
                if (R > L)
                {
                    minimumChange++;
                    total += R;
                    dispatch.push_back(R - L);
                }
                else
                {
                    total += L;
                }
            }
            else
            {
                if (L > R)
                {
                    minimumChange++;
                    dispatch.push_back(L - R);
                    total += L;
                }
                else
                {
                    total += R;
                }
            }
        }

        vector<ll> ans(n + 1);

        for (int i = minimumChange; i <= n; i++)
        {
            ans[i] = total;
        }

        sort(dispatch.begin(), dispatch.end(), greater<ll>());

        for (int i = minimumChange - 1; i >= 1; i--)
        {
            total -= dispatch.back();
            dispatch.pop_back();
            ans[i] = total;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}