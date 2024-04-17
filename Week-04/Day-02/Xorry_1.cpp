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
        ll x,temp=1;
	    cin>>x;
        while(temp<x){
            temp*=2;
        }
        if(temp==x)
	    cout<<(x^temp)<<" "<<temp<<endl;
        else
        cout<<(x^temp/2)<<" "<<temp/2<<endl;


}
return 0;
}