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

map<string,ll>mp;
ll n;cin>>n;
vector<string>v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]=1;
}
for(ll i=0;i<n;i++){
    ll f=0;
    for(ll j=0;j<v[i].length();j++){
        string a = v[i].substr(0, j), b = v[i].substr(j, v[i].length() - j);
			if (mp[a] && mp[b]){
                f=1;
            }
    }
    cout<<f;
}
cout<<endl;


}
return 0;
}