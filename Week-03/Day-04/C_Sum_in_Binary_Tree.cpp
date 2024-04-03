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
        ll sum = 0;

        while (n >= 1) {
            sum += n;
            n /= 2;
        }

        cout << sum << endl;


}
return 0;
}