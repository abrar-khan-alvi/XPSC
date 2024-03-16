#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll t;
    t = 1;
    //cin >> t;

    while (t--) {
        string s;
        cin >> s;
        ll len = s.size();
        if (len == 1) cout << 000 << s << endl;
        else if (len == 2) cout << "00" << s << endl;
        else if (len == 3) cout << "0" << s << endl;
        else cout << s << endl;
    }
    return 0;
}
