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
ll n;cin>>n;
string s="Timur";
sort(s.begin(),s.end());
string s1;cin>>s1;
sort(s1.begin(),s1.end());
if(s==s1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;


}
return 0;
}