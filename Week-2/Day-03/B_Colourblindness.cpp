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
ll f=0;
char a[2][n];
for(ll i=0;i<2;i++)
{
    for(ll j=0;j<n;j++){
        cin>>a[i][j];
    }
}
for(ll i=0;i<n;i++)
{
if((a[0][i]=='G' && a[1][i]=='B') || (a[0][i]=='B' && a[1][i]=='G')){
    continue;
}
else if(a[0][i]==a[1][i]){
    continue;
}
else {
    f=1;
    break;
}
}
if(f) cout<<"NO"<<endl;
else cout<<"YES"<<endl;

}
return 0;
}