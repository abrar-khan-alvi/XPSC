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
ll n;cin>>n;
vector<ll>a(n),b(n);
for(ll i=0;i<n;i++) cin>>a[i];
for(ll i=0;i<n;i++) cin>>b[i];
sort(a.begin(),a.end());
sort(b.begin(),b.end());
int ans=0;
for(int i=n-1;i>=0;i--)
{
    if(a[i]>b[i]  || b[i]-a[i]>1)
    {
        ans=1;
        break;
    }
}
if(ans==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;


}
return 0;
}