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
    ll n,k;
    cin>>n>>k;
    ll a[n];
    map<ll,vector<ll> > m;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]].push_back(i);

    }
    while(k--)
    {
        ll t1,t2,f=0,p=0,q=0;
        cin>>t1>>t2;
        if(m[t1].empty() || m[t2].empty())
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(t1==t2)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(m[t1].front()<m[t2].back()){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
    return 0;
}