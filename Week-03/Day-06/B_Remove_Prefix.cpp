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
        int n;
        cin >> n;
        vector<int> a(n);
        for(ll i=0;i<n;i++)
            cin >> a[i];
        map<int, int> c;
        ll k=0;
        for (int i = n - 1; i >= 0; i--) {
            if (c.count(a[i])) {
                //cout<<c.count(a[i])<< " ";
                k=i+1;
                //cout << i + 1 << endl;
                //yes = true;
                break;
            }
            c[a[i]] = 1;
        }
        cout<<k<<endl;
}
return 0;
}