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
map<char,ll>mp;
for(char i='a';i<='z';i++){
    mp[i]=0;
}

while(t--){
string s;cin>>s;
ll len=s.size();
for(ll i=0;i<len;i++){
    mp[s[i]]++;
}
for(auto x:mp){
    if(x.second==0)
    {
        cout<<x.first<<endl;
        return 0;
    }
}

cout<<"None"<<endl;
}
return 0;
}