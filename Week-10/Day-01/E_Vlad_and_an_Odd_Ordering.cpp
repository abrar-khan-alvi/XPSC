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
ll n,k;
cin>>n>>k;
for(int i=1;i<=(log2(n)+1);i++){
    ll x=pow(2,i);
    ll y=(n+(x/2))/x;
    if(k<=y){
        if(k==1){
            cout<<(x/2)<<endl;
            break;
        }
        else{
            ll ans=(x/2)+((k-1)*x);
            cout<<ans<<endl;
            break;
        }
    }
    else{
        k-=y;
    }
}
}
return 0;
}