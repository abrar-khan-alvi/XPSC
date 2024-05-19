#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

// Function to find all distinct k values for a given a, b, and l
void solve() {
    ll a, b, l;
    cin >> a >> b >> l;
    set<ll> k_values;

    // Try different powers of a, dividing l by a^i
    for (int i = 0; i <= 40; ++i) {
        ll temp_l = l;
        bool valid = true;
        
        // Divide temp_l by a^i
        for (int j = 0; j < i; ++j) {
            if (temp_l % a != 0) {
                valid = false;
                break;
            }
            temp_l /= a;
        }
        
        if (!valid) continue;

        // For each valid division by a^i, try dividing further by b^j
        while (true) {
            k_values.insert(temp_l); // Insert the current quotient as a possible k
            if (temp_l % b != 0) break; // Stop if it's not divisible by b
            temp_l /= b;
        }
    }
    
    // Output the size of the set of distinct k values
    cout << k_values.size() << endl;
}

int main() {
    faster;
    ll t;
    cin >> t; // Read number of test cases

    while (t--) {
        solve(); // Solve each test case
    }
    return 0;
}
