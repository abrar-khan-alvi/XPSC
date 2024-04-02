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
ll n;cin>> n;
ll a[n];
priority_queue<ll>pq;

for(ll i=0;i<n;i++)   cin>>a[i];

ll sum=0;
for(ll i=0;i<n;i++){
    if(a[i]==0 && !pq.empty()){
        sum+=pq.top();
        pq.pop();
    }
    else pq.push(a[i]);
}

cout<<sum<<endl;
}
return 0;
}