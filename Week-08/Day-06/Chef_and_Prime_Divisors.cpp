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
ll a,b;cin>>a>>b;
while(__gcd(a,b)!=1)
{
    ll x=__gcd(a,b);
    b/=x;
    if(b==1) break;
}
if(b==1) cout<<"Yes"<<endl;
else cout<<"No"<<endl; 

}
return 0;
}