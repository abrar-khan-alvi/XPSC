#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


vector <ll> v;

int main()
{
	ll n, k;
	cin >> n >> k;

	for(ll i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			v.push_back(i);
			if(n / i != i) {
				v.push_back(n / i);
			}
		}
	}
	sort(v.begin(), v.end());

	ll sz = v.size();
	if(sz < k)
		cout << "-1" << endl;
	else 
		cout << v[k - 1] << endl;

	return 0;
}