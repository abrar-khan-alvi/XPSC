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
        
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)cin>>arr[i];
    
    ll rst = arr[0];
    for(ll i=1;i<n;i++)rst=rst&arr[i];
    
    cout<<rst<<endl;


}
return 0;
}