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
if(n%2!=0)
{
for( ll i=1;i<=n;i++)
cout<<i<<" ";
}
else{
for( ll i=1;i<=n;i++)
cout<<2*i<<" ";
}
cout<<endl;


}
return 0;
}