#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll t;
    //cin >> t;
    t=1;

    while (t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll>a;
        for(ll i=0;i<n;i++)
        {
            ll x;cin>>x;
            a.push_back(x);
        }
        map<ll,ll>m;
        ll pref=0;ll cnt=0;
        m[0]=1;
        for(auto it:a)
        {
            pref+=it;
            if(m.find(pref-x)!=m.end()){
                cnt+=m[pref-x];
            }
            m[pref]++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
