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
for(ll i=a;i<=b;i++){
    if(i%c==0){
        cout<<i<<endl;
        return 0;
    }
}
cout<<-1<<endl;


}
return 0;
}