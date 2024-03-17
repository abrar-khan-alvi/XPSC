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
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
sort(a,a+n);
if(sum%2==0){
cout<<sum<<endl;
}
else{
    for(ll i=0;i<n;i++){
        if((sum-a[i])%2==0){
            cout<<sum-a[i]<<endl;
            break;
        }
    }

}
}
return 0;
}