#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int check(ll n)
{
    ll flag = 0;
    for(ll i=2; i*i <=n ; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)return 1;
    else return 0;
}
 

int main()
{
faster;
ll t;
t=1;
//cin>>t;

while(t--){
ll n;
cin>>n;
if( n == 2 )
    cout<<1<<endl;
else if( n % 2 == 0 )
    cout<<2<<endl;
else
{
    if(check(n))cout<<1<<endl;
    else if( check(n-2) )cout<<2<<endl;
    else cout<<3<<endl;
}
}
return 0;
}