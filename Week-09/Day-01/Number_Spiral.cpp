#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;



int main() {
    int T;
    cin >> T;
    while (T--) {
        ll Y, X;
        cin >> Y >> X;
        if (Y > X) 
        {
            ll ans = (Y - 1) * (Y - 1);
            cout << ans + ((Y % 2 != 0) ? X : 2 * Y - X) << endl;
        } 
        else 
        {
            ll ans = (X - 1) * (X - 1);
            cout << ans + ((X % 2 == 0) ? Y : 2 * X - Y) << endl;
        }
    }
    return 0;
}
