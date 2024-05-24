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
ll n;cin>>n;
vector<ll>a(n);
ll m=0;
for(ll i=0;i<n;i++) cin>>a[i];
for(ll i=1;i<n;i++)
{
    if(a[i]<a[i-1])
    {
        m+=(a[i-1]-a[i]);
        a[i]=a[i-1];
    }
}
cout<<m<<endl;

}
return 0;
}