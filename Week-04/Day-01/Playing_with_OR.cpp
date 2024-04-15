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
for(ll i=0;i<n;i++)cin>>a[i];
ll cnt=0;

for(ll i=0;i<n-k+1;i++){
    ll temp=0;
    for(ll j=i;j<i+k;j++){
        //cout<<a[j]<<" ";
        if(a[j]%2!=0){
            temp=1;
            break;
        }
    }
    //cout<<endl;
if(temp) cnt++;   
}
cout<<cnt<<endl;
}
return 0;
}