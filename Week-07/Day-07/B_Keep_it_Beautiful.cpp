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
    int neg = 0;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        if(v.empty() || (!neg && v.back() <= a)) {
            v.push_back(a);
            cout << "1";
        } else if((!neg && v[0] >= a) || (neg && v.back() <= a && v[0] >= a)) {
            neg = 1;
            v.push_back(a);
            cout << "1";
        } else cout << "0";
    } 
    cout << "\n";


}
return 0;
}