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
ll n, k, q;
cin >> n >> k >> q;
vector<ll> a(k+1), b(k+1);
a[0] = 0;
b[0] = 0;
for(ll i = 1; i <= k; i++) cin >> a[i];
for(ll i = 1; i <= k; i++) cin >> b[i];
for(ll i = 0; i < q; i++)
{
    ll c;
    cin >> c;
    ll l = 0, r = k;
    while(l <= r)
    {
        ll mid = l+r>>1;
        if(a[mid] > c)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    if(a[r] == c)
    {
        cout << b[r] << " ";
        continue;
    }
    ll ans = b[r] + (c-a[r])*(b[r+1]-b[r])/(a[r+1]-a[r]);
    cout << ans << " ";
}
cout << endl;


}
return 0;
}