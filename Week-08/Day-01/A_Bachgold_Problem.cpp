#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
faster;
ll t = 1;
// cin >> t;
while (t--) {
ll n;
cin >> n; 
if (n % 2 == 0) {
    
    cout << n / 2 << endl;
    for (ll i = 0; i < n / 2; ++i) {
        cout << 2 << " ";
    }
} else {
    
    cout << (n - 3) / 2 + 1 << endl;
    cout << 3 << " ";
    for (ll i = 0; i < (n - 3) / 2; ++i) {
        cout << 2 << " ";
    }
}
cout << endl;
}
    return 0;
}
