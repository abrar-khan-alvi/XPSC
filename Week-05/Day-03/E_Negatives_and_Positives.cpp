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
ll n,cnt=0,sum=0;cin>>n;
vector<ll>a(n);
ll mn=LLONG_MAX;
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<0){
        a[i]=-a[i];
        cnt++;
    } 
    sum+=a[i];
    mn=min(mn,a[i]);
}
if(cnt%2==1) sum-=2LL*mn;
cout<<sum<<endl;


}
return 0;
}