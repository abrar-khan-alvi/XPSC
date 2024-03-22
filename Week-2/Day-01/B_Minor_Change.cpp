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
string s,t;
cin>>s>>t;
ll n=s.size();
ll i=0;
ll cnt=0;
while(i<n){
    if(s[i]!=t[i]) cnt++;
    i++;
}

cout<<cnt<<endl;

}
return 0;
}