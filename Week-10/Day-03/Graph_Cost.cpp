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
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    ll mn = a[n-1], ind = n-1;

    vector<pair<ll,ll>>v(n);

    for(ll i=n-1;i>=0;i--)
    {
        if(a[i]<=mn)
        {
            mn = a[i];
            ind = i;
        }
        v[i]= {mn,ind};
    }

    if(n==1)
    {
        cout<<0<<endl;
    }
    else
    {
        ll cost=0;
        mn = a[0];
        ind = 0;
        ll sum=0;
        for(ll i=1;i<n;i++)
        {
            sum += max(a[i],a[i-1]);

            if(a[i]<mn || a[i]==v[i].first)
            {
                cost += min(sum,(i-ind)*max(mn,a[i]));
                mn = a[i];
                ind = i;
                sum = 0;
            }
        }

        cout<<min(cost,max(a[0],a[n-1])*(n-1))<<endl;
    }
    


}
return 0;
}