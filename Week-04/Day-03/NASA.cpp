#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

vector<ll> palindrome;

void pala()
{
    for (int i = 0; i < 32786; i++)
    {
        string s = to_string(i);
        string temp = s;
        reverse(s.begin(), s.end());
        if (temp == s)
        {
            palindrome.push_back(i);
        }
    }
}

int main()
{
    pala();
    faster;
    ll t;
    // t=1;
    cin >> t;

    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        unordered_map<ll, ll> mp;
        for (auto x : a)
        {
            ++mp[x];
            for (auto it : palindrome)
            {
                ans += mp[x ^ it];
            }
        }
        cout << ans << endl;
    }
    return 0;
}