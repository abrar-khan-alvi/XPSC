#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    int t; 
    cin >> t;

    while (t--) {
        int A, B;
        cin >> A >> B; 

        if (B == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << A << ' ' << A * (ll)B << ' ' << A * (ll)(B + 1) << endl;
        }
    }

    return 0;
}
