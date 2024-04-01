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
ll a,b,c;cin>>a>>b>>c;

for(ll i=0;i<=c;i+=a){
    for(ll j=0;j<=c;j+=b){
        if(i+j==c){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
}
cout<<"No"<<endl;

}
return 0;
}