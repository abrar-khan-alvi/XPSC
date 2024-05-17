#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


unordered_map<ll, ll> mp;

int main()
{
faster;
ll t;
t=1;
//cin>>t;

while(t--){
ll N;
cin >> N;
while(N--)
{
ll str;
cin >> str;
ll root = sqrt(str);
for(ll i = 2; i <= root; i++)
{
	if(str%i == 0)
		mp[i]++;
	while(str%i == 0) str/= i;
}
if(str > 1) mp[str]++; 
}
ll ans = 1;
for(auto it = mp.begin(); it != mp.end(); it++)
{
	ans = max(ans, (*it).second);
}
cout << ans << endl;
}
return 0;
}