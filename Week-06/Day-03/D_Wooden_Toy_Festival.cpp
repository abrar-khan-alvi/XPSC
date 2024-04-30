#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

vector<ll>a;
ll n;

bool possible(ll diff){
    ll cnt=1;
    for(int l=0,r=l+1;r<n;){
    if(a[l]+diff+diff>=a[r]){
       r++;
    }
    else{
       cnt++;
       l=r;
       r=l;
    }
}
return (cnt<4);
}

int main()
{
faster;
ll t;
//t=1;
cin>>t;

while(t--){
    a.clear();
cin>>n;

for(ll i=0;i<n;i++){
    ll x;cin>>x;
    a.push_back(x);
}

sort(a.begin(),a.end());

ll low=0,high=1000000000000000,ans=0;
 
      while(low<=high){
         ll mid=low+(high-low)/2LL;
 
         if(possible(mid)){
            ans=mid;
            high=mid-1LL;
         }
         else{
            low=mid+1LL;
         }
      }
 
      cout<<ans<<endl;


}
return 0;
}