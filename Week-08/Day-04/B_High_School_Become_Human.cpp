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
ld x,y;cin>>x>>y;
ld temp=x*log(y);
ld temp1=y*log(x);
if(abs(temp-temp1)<1e-8) cout<<"="<<endl;
else if(temp>temp1) cout<<"<"<<endl;
else  cout<<">"<<endl;


}
return 0;
}