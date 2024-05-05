#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {

    faster;
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = n + 1;
        for (char i = 'a'; i <= 'z'; i++) {
            int l = 0, r = n - 1, cnt = 0;
            while (l <= r) {
                if (s[l] == s[r]) {
                    l++;
                    r--;
                } else if (s[l] == i) {
                    cnt++;
                    l++;
                } else if (s[r] == i) {
                    cnt++;
                    r--;
                } else {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans == n + 1)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
