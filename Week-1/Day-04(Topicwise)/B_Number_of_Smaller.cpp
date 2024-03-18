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
ll n,m;cin>>n>>m;
vector<ll>a(n),b(m);
for(ll i=0;i<n;i++)cin>>a[i];
for(ll i=0 ;i<m;i++) cin>>b[i];
ll r=0,l=0,cnt=0;
while(r<m){

    while(b[r]>a[l] && l<n){
        cnt++;
        l++;
    }
    r++;
    cout<<cnt<<" ";
}


}
return 0;
}