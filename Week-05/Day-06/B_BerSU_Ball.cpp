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
ll n,m,cnt=0;
cin>>n;
vector<ll>a(n);
for(ll i=0;i<n;i++) cin>>a[i];
cin>>m;
vector<ll>b(m);
for(ll i=0;i<m;i++) cin>>b[i];
 for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (abs(a[i] - b[j]) < 2)
            {
                b[j] = 1000;
                cnt++;
                break;
            }
cout<<cnt<<endl;

}
return 0;
}