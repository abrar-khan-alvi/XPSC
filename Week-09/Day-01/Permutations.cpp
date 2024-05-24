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
ll N;cin>>N;
    if (N == 2 || N == 3) {
        cout << "NO SOLUTION\n";
    
    }

    else
    {
    for (ll i = 2; i <= N; i = i + 2) {
        cout << i << " ";
    }
    for (ll i = 1; i <= N; i = i + 2) {
        cout << i << " ";
    }
    }
}
return 0;
}