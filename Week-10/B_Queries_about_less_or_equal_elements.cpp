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
    ll n,k; cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(ll i=0;i<k;i++)
    {
        ll x;cin>>x;
        cout<<upper_bound(a.begin(),a.end(),x)-a.begin()<<" ";
    }
    cout<<endl;


}
return 0;
}