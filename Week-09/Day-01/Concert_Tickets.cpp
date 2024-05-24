#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main()
{
faster;
ll t;
t=1;
//cin>>t;

while(t--){
    ll n, m;
    cin >> n >> m;
    multiset<ll> ticketPrices;
    vector<ll> customerMaxPrices(m);
    for (ll i = 0; i < n; ++i) {
        ll price;
        cin >> price;
        ticketPrices.insert(price);
    }
    for (ll i = 0; i < m; ++i) {
        cin >> customerMaxPrices[i];
    }
    for (ll maxPrice : customerMaxPrices) {
        auto it = ticketPrices.upper_bound(maxPrice);
        if (it == ticketPrices.begin()) {
            cout << -1 << endl;
        } else {
            --it;
            cout << *it << endl;
            ticketPrices.erase(it);
        }
    }



}
return 0;
}