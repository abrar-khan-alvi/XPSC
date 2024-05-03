#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool possible(ll t, ll n, ll x, ll y)
{
    if (t < min(x, y))
        return false;

    ll cnt = 1;
    t -= min(x, y);
    cnt += t / x + t / y;

    return cnt >= n;
}

int main()
{
faster;
ll t;
t=1;
//cin>>t;

while(t--){
    ll n, x, y;
    cin >> n >> x >> y;

    ll l = 0, r = max(x, y) * n, mid;

    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        if (possible(mid, n, x, y))
            r = mid;
        else
            l = mid;
    }
    cout << r;


}
return 0;
}