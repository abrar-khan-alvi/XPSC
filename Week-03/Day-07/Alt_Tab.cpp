#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


bool cmp(const pair<string, ll> &a, const pair<string, ll> &b) {
    return a.second < b.second;
}

int main() {
    faster;
    ll t;
    t = 1;
    //cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        map<string, ll> mp;
        for (ll i = n - 1; i >= 0; i--) {
            string s;
            cin >> s;
            mp[s] = i;
        }
        vector<pair<string, ll>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), cmp);
        string s;
        for (const auto &it : vec) {
            
            cout<<it.first.substr(it.first.size() - 2);
        }
        cout << endl;
    }
    return 0;
}
