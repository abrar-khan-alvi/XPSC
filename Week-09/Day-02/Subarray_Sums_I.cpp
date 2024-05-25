#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main() {
    ll n,x; cin>>n>>x;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll l=0,r=0,cnt=0,sum=0;
    while(r<n)
    {
        sum+=a[r];
        while(sum>x && l<=r)
        {
            sum-=a[l];
            l++;
        }
        if(sum==x)
        {
            cnt++;
        }
        r++;
    }
    cout<<cnt<<endl;
    return 0;
}
