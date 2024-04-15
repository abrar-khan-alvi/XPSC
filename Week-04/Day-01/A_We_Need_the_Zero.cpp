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

ll a[n];
ll x=0;
for(ll i=0;i<n;i++){
    cin>>a[i];
    x^=a[i];
}

if(x==0)cout<<x<<endl;
else if(n%2!=0)
cout<<x<<endl;
else cout<<-1<<endl;



}
return 0;
}