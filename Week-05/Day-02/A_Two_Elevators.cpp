#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main(){
    faster;
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll a1=a-1;
        ll c1=c-1;
        ll b1=abs(c-b)+c1;
 
    if(a1<b1)
        cout<<"1"<<endl;
     else if(b1==a1)
        cout<<"3"<<endl;
     else
        cout<<"2"<<endl;
    }
return 0;
}