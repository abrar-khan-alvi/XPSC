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
//t=1;
cin>>t;

while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll sum = 0,cnt=0,f=0;

        for (auto x : a) {
            sum += abs(x);
            if (x < 0 && !f) {
                f = 1;
                cnt++;
            }
            if (x > 0) {
                f = 0;
            }
        }

        cout << sum << " " << cnt << endl;


}
return 0;
}