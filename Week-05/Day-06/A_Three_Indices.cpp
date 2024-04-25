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
ll n,f=0;cin>>n;
vector<ll>a(n);
for(ll i=0;i<n;i++) cin>>a[i];
for(ll i=1;i<n-1;i++){
    if(a[i]>a[i-1] && a[i]>a[i+1]){
        cout<<"YES"<<endl;
        cout<<i<<" "<<i+1<<" "<<i+2<<endl;
        f=1;
        break;
    }
}
if(!f) cout<<"NO"<<endl;
}
return 0;
}