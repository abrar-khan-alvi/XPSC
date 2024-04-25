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
string s;
cin>>s;
ll n=s.length();
set<char>st;
for(ll i=0;i<n/2;i++){
st.insert(s[i]);
}
if(st.size()>1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;


}
return 0;
}