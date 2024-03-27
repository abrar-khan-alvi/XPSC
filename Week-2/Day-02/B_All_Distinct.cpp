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
set<ll>st;
for(ll i=0;i<n;i++){
    ll x;cin>>x;
    st.insert(x);
}
if((n-st.size())%2)
cout<<st.size()-1<<endl;
else cout<<st.size()<<endl;
}
return 0;
}