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
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    if (s % n <= b && 1ll * a * n + b >= s) {
		cout << "YES"<<endl;
	}
	else {
		cout << "NO"<<endl;
	}

}
return 0;
}