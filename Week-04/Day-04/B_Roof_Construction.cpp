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
if(n==2) cout<<0<<" "<<1<<endl;
else {
    ll cur=n-1;
    while(cur>1){
        cout<<cur<<" ";
        if((ll)log2(cur-1)!=(ll)log2(cur)) break;

        cur--;
    }
    for(ll i=0;i<=cur-1;i++) cout<<i<<" ";
    cout<<endl;
}


}
return 0;
}