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
//t = 1;
cin >> t;

while (t--)
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)   cin >> a[i];
    ll cnt = 0, pos;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == a[0])
            cnt++;
        if (cnt == k)
        {
            pos = i;
            break;
        }
    }

    if (cnt < k)
    {
        cout << "NO" << endl;
        continue;
    }
    else if (a[0] == a[n - 1])
    {
        cout << "YES" << endl;
        continue;
    }
    cnt = 0;
    for (ll i = pos + 1; i < n; i++)
    {
        if (a[i] == a[n - 1])
            cnt++;
    }
    if (cnt < k)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
}
return 0;
}