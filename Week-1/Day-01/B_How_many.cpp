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
ll n,s,cnt=0;cin>>n>>s;
for(ll i=0;i<=n;i++)
{
    for(ll j=0;j<=n;j++){
        for(ll k=0;k<=n;k++){
            if((i+j+k<=n) && (i*j*k<=s)) cnt++;
        }
    }
}
cout<<cnt<<endl;

}
return 0;
}