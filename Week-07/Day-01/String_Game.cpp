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
ll n,cnt=0;cin>>n; 
string s;cin>>s;
stack<char>st;
for (auto i:s){
    if(!st.empty() && st.top()!=i){
        st.pop();
        cnt++;
    }
    else st.push(i);
}
if(cnt%2==0) cout<<"Ramos"<<endl;
else cout<<"Zlatan"<<endl;
}
return 0;
}