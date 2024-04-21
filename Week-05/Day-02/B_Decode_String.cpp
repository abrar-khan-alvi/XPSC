#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>v;
 
    for(ll i=n-1;i>=0;--i){
    if(s[i]=='0')
    {
        ll b=(s[i-2]-'0')*10;
        ll a=s[i-1]+b-'0'+96;
        //cout<<a<<i<<" ";
        char ch=a;
        v.push_back(ch);
        i-=2;
    }
    else{
      ll a=s[i]-'0'+96;
     // cout<<a<<i<<" ";
      char ch=a;
    v.push_back(ch);
    }
}
for(ll i=v.size()-1;i>=0;--i) cout<<v[i];

    cout<<endl;
}
return 0;
}