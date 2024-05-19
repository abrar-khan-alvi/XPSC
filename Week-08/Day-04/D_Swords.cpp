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
ll n,sum=0;cin>>n;
vector<ll>a(n);
for(ll i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];
}
ll maaax= *max_element(a.begin(),a.end());

ll g=maaax-a[0];
for(ll i=1;i<n;i++)
{
    g=__gcd(g,maaax-a[i]);
}
cout<<((maaax*n)-sum)/g<<" "<<g<<endl;


}
return 0;
}