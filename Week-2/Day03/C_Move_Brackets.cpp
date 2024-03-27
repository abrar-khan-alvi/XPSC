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
    // t=1;
    cin >> t;

    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        //cout << s << endl;
        stack<char> st;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}