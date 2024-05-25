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
if((2*a-b)%3 || (2*b-a)%3 || (2*a-b)<0 || (2*b-a)<0)
{
    cout<<"NO"<<endl;
}
else cout<<"YES"<<endl;


}
return 0;
}