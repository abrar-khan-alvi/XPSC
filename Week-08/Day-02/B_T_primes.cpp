#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int N = 1000000; 

vector<bool> is_prime(N + 1, true);

void sieve() {
    is_prime[0] = is_prime[1] = false; 
    for (ll i = 2; i * i <= N; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    faster;

    ll t; 
    cin >> t;

    while (t--) {
        ll x; 
        cin >> x;
        ll root = sqrt(x);
        if (root * root == x && root <= N && is_prime[root]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
