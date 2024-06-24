#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll n;
    cin >> n;
    
    vector<pair<ll, ll>> events; // pair of (time, type), where type is +1 for arrival and -1 for leaving
    
    for (ll i = 0; i < n; ++i) {
        ll a, b;
        cin >> a >> b;
        events.push_back({a, 1}); // arrival event
        events.push_back({b, -1}); // leaving event
    }
    
    // Sorting events by time, if times are equal, leaving event (-1) should come before arrival event (+1)
    sort(events.begin(), events.end());
    
    ll current_count = 0;
    ll max_customers = 0;
    
    for (auto event : events) {
        current_count += event.second; // +1 for arrival, -1 for leaving
        max_customers = max(max_customers, current_count);
    }
    
    cout << max_customers << endl;
    
    return 0;
}
