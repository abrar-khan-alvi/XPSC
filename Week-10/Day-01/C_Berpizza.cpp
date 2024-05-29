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
set<pair<ll,ll>>a,b;
while(t--){
int q;
cin>>q;
int cnt=0;
while(q--)
{
    int k;
    cin>>k;
    if(k==1)
    {
        ll m;
        cin>>m;
        cnt++;
        a.insert({cnt,m});
        b.insert({-m,cnt});
    }
    else if(k==2)
    {
        auto u=a.begin()->first,v=a.begin()->second;
        cout<<u<<' ';
        a.erase(a.begin());
        b.erase({-v,u});
    }
    else
    {
        auto u=b.begin()->first,v=b.begin()->second;
        cout<<v<<' ';
        a.erase({v,-u});
        b.erase(b.begin());
    }
}


}
return 0;
}