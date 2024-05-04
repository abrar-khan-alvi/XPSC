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
ll n;
cin >> n;
ll a[n];
for (ll i = 0; i < n; i++) {
    cin >> a[i];
}
ll min_score = abs(a[0] - a[1]);
for (ll i = 1; i < n-1; i++) {
    ll score = max(abs(a[i]-a[i-1]), abs(a[i]-a[i+1]));
    min_score = min(min_score, score);
}
min_score = min(min_score, abs(a[n-1] - a[n-2]));
cout << min_score << endl;
}
return 0;
}