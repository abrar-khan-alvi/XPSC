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
ll n,m; cin>>n>>m;
for(ll i=0;i<n;i++) {
for(ll j=0;j<m;j++) {
    if(i%2==0) cout<<(n/2+i/2)*m+j+1<<' ';
    else cout<<(i/2)*m+j+1<<' ';
}
cout<<endl;
}
cout<<endl;cout<<endl;
}
return 0;
}