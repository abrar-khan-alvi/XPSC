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
        string a,b;
        ll n;
        cin>>n>>a;
        //a.push_back('.');
        //cout<<a<<endl;
        for(ll i=0;i<n;i++) {
            a[i]=tolower(a[i]);
        }
        for(ll i=1;i<=n;i++)
        {
            if(a[i]!=a[i-1])b.push_back(a[i-1]);
        }
        if(b=="meow")cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

}
return 0;
}