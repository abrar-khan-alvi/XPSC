#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

string binary(int n)
{
    string ans;
    for (int i = 64; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}

int main()
{
faster;
ll t;
//t=1;
cin>>t;

while(t--){
    ll n;
    cin >> n;
    vector<ll> v(n);
    
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> m(64);
    ll g = 0;
    for (ll i = 0; i < n; i++)
    {
        string s = binary(v[i]);
        for (ll j = 0; j < 64; j++)
        {
            if (s[j] != '0')
                m[j]++;
        }
    }
    for (ll i = 0; i < 64; i++)
        g = __gcd(g, m[i]);
    for (int i = 1; i <= n; i++)
    {
        if (g % i == 0)
            cout << i << ' ';
    }
    cout << endl;

}
return 0;
}