#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
faster;
ll t;
//t=1;
cin>>t;

while(t--){
    ll d;
    cin>>d;
    ll prv = 1;
    ll p = -1, q = -1;
    ll i=d+1;
    while(true)
    {
        if(isprime(i))
        {
            p= i;
            break;
        }
        i++;
    }
    ll j=p+d;
    while(true)
    {
        if(isprime(j))
        {
            q= j;
            break;
        }
        j++;
    }

    cout<<p*q<<"\n";


}
return 0;
}