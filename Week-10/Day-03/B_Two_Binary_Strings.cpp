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
string a,b;cin>>a>>b;
ll f=0;
for(ll i=0;i<a.size()-1;i++)
{
    if(a[i]==b[i] && a[i]=='0' && a[i+1]==b[i+1] && a[i+1]=='1')
        f=1;
}
if(f) puts("YES");
else puts("NO");

}
return 0;
}