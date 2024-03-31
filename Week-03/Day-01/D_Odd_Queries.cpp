#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    faster;
    ll t;
    // t=1;
    cin >> t;

    while (t--)
    {
        int n, q, sum = 0;
        cin >> n >> q;

        ll a[n];
        vector<ll>pre(n+1,0);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i <=n; i++)
        {
            pre[i]=pre[i-1]+a[i-1];
        }
        //cout<<pre[n]<<endl;
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            ll sum=pre[n];
            sum-=pre[r]-pre[l-1];
            sum+=(r-l+1)*k;
            //cout<<sum<<endl;
            if(sum%2)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        }
        
       
    }
    return 0;
}