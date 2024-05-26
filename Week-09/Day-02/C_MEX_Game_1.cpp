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
int n; cin >> n;
vector <int> f(n + 1, 0);

for (int i = 0; i < n; i++){
    int x; cin >> x;
    f[x]++;
}

int c = 0;
for (int i = 0; i <= n; i++){
    c += (f[i] == 1);
    if ((c == 2) || (f[i] == 0)){
        cout << i << "\n";
        break;
    }
}


}
return 0;
}