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
    cin>>t;

    while(t--){
        ll n, sum = 0;
        cin>>n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) {
            cin>>a[i];
            sum += a[i] - 1;
        }
        if(n == 1) {
            cout<<"NO"<<endl;
            continue;
        }

        ll x = count(a.begin(), a.end(), 1);
        if(sum >= x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
