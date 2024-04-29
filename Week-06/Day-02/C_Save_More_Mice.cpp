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
		int n, k;
		cin >> n >> k;

		vector<int> x(k);
		for (int i = 0; i < k; i++) cin >> x[i];
		sort(x.rbegin(), x.rend());

		int cnt = 0;
		long long sum = 0;

		while (cnt < x.size() && sum + n - x[cnt] < n)
		{
			sum += n - x[cnt++];
		}

		cout << cnt << '\n';


}
return 0;
}