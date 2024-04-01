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
ll k ,s,cnt=0; cin>> k >> s;
for (ll i = 0; i <= k; ++i) {
    for (ll j = 0; j <= k; ++j) {
        ll ans = s - i - j;
        if (ans >= 0 && ans <= k) cnt++;
    }
}

cout<<cnt<<endl;
}
return 0;
}