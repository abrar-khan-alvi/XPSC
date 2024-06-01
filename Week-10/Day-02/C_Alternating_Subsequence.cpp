#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    faster;
    ll t;
    cin >> t;

    while (t--) {
        ll n; 
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) 
            cin >> a[i];

        ll i = 0;
        ll sum = 0;
        
        while (i < n) {
            ll k = i;
            ll small = LLONG_MIN;
            ll big = LLONG_MIN;

            if (a[i] < 0) {
                while (i < n && a[i] < 0) {
                    small = max(a[i], small);
                    i++;
                }
                //cout<<small<<" ";
                sum += small;
            } else {
                while (i < n && a[i] > 0) {
                    big = max(a[i], big);
                    i++;
                }
                //cout<<big<<" ";
                sum += big;
            }
            //cout<<endl;
        }
        cout << sum << endl;
    }
    return 0;
}
