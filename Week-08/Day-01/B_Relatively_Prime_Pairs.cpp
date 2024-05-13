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
ll l,r;cin>>l>>r;
cout<<"YES"<<endl;
for(ll i=0;i<=(r-l)/2;i++)
{
    cout<<l + i * 2<<" "<<l + i * 2 + 1<<endl;
}

}
return 0;
}