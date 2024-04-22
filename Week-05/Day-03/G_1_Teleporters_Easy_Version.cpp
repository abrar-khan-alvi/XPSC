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
ll n,c; cin>>n>>c;

priority_queue<ll>pq;

for(ll i=1;i<=n;i++)
{
    ll x;cin>>x;
    pq.push(-x-i);
}
ll cnt=0;
while(!pq.empty()){
    ll temp=-pq.top();pq.pop();
    if(temp>c) break;
    cnt++;
    c-=temp;
}
cout<<cnt<<endl;



}
return 0;
}