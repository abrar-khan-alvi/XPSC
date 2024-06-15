#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int MAX_SIZE = 300009;
ll a[MAX_SIZE];

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    FAST_IO

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        ordered_set s;

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
            s.insert(a[i]);
        }

        ll ans = 0;
        for (ll i = 0; i < n; ++i) {
            s.erase(s.upper_bound(a[i]));
            ans += s.order_of_key(a[i] + 1);
        }

        cout << ans << endl;
    }

    return 0;
}
