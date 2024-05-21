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
ll l,r,d=0,f=0;
cin>>l>>r;

for(ll i=l;i<=r;i++){
        d=i;
    for(ll j=2;j*j<=i;j++){
        if(i%j==0){
            d=j;
            break;
        }
    }
    if(i!=d){
        cout<<d<<" "<<i-d<<endl;
        f=1;
        break;
    }

}
if(f==0)
cout<<-1<<endl;

}
return 0;
}