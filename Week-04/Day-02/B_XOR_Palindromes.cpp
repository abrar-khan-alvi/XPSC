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
//t=1;
cin>>t;

while(t--){
    ll n;cin >> n;
    string s; cin >> s;
    string t(n+1,'0');
    ll ans = 0, x = 0, y = 0;
    for(ll i = 0; i <= n/2-1; ++i) {
        if(s[i] == s[n-i-1])
            y++;
        else
            ans++;
    }
    if(n % 2 == 1) x++;
    for(ll j = 0; j <= y; ++j) {
        for(ll k = 0; k <= x; ++k) {
            t[ans + j*2 + k] = '1';
        }
    }
    cout << t << "\n";
}
return 0;
}