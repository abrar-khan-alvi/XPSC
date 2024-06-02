#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string st = s;
        
        map<char, vector<ll>> m;
        map<char, ll> Frq;
        
        for (ll i = 0; i < n; i++) {
            m[s[i]].push_back(i);
            Frq[s[i]]++;
        }

        ll f = 0;

        while (true) {
            if (Frq['N'] && Frq['S']) {
                --Frq['N'];
                --Frq['S'];
                if (f == 0) {
                    st[m['N'].back()] = 'R';
                    st[m['S'].back()] = 'R';
                    f = 1;
                } else {
                    st[m['N'].back()] = 'H';
                    st[m['S'].back()] = 'H';
                    f = 0;
                }
                m['N'].pop_back();
                m['S'].pop_back();
            } else if (Frq['N'] && !Frq['S']) {
                if (f == 0) {
                    st[m['N'].back()] = 'R';
                    f = 1;
                } else {
                    st[m['N'].back()] = 'H';
                    f = 0;
                }
                m['N'].pop_back();
                --Frq['N'];
            } else if (!Frq['N'] && Frq['S']) {
                if (f == 0) {
                    st[m['S'].back()] = 'R';
                    f = 1;
                } else {
                    st[m['S'].back()] = 'H';
                    f = 0;
                }
                m['S'].pop_back();
                --Frq['S'];
            } else {
                break;
            }
        }
        while (true) {
            if (Frq['E'] && Frq['W']) {
                --Frq['E'];
                --Frq['W'];
                if (f == 0) {
                    st[m['E'].back()] = 'R';
                    st[m['W'].back()] = 'R';
                    f = 1;
                } else {
                    st[m['E'].back()] = 'H';
                    st[m['W'].back()] = 'H';
                    f = 0;
                }
                m['E'].pop_back();
                m['W'].pop_back();
            } else if (Frq['E'] && !Frq['W']) {
                if (f == 0) {
                    st[m['E'].back()] = 'R';
                    f = 1;
                } else {
                    st[m['E'].back()] = 'H';
                    f = 0;
                }
                m['E'].pop_back();
                --Frq['E'];
            } else if (!Frq['E'] && Frq['W']) {
                if (f == 0) {
                    st[m['W'].back()] = 'R';
                    f = 1;
                } else {
                    st[m['W'].back()] = 'H';
                    f = 0;
                }
                m['W'].pop_back();
                --Frq['W'];
            } else {
                break;
            }
        }

        ll xr = 0, yr = 0, xh = 0, yh = 0;
        bool r1 = false, h1 = false;

        for (ll i = 0; i < n; i++) {
            if (st[i] == 'R') {
                r1 = true;
                if (s[i] == 'N') yr++;
                else if (s[i] == 'S') yr--;
                else if (s[i] == 'E') xr++;
                else xr--;
            } else {
                h1 = true;
                if (s[i] == 'N') yh++;
                else if (s[i] == 'S') yh--;
                else if (s[i] == 'E') xh++;
                else xh--;
            }
        }

        if (xr == xh && yr == yh && r1 && h1) {
            cout << st << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}