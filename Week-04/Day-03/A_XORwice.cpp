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
//(a^(a& b)) + (b^(a& b))
while(t--){
ll a,b;cin>>a>>b;
cout<<(a^(a & b)) + (b^(a & b))<<endl;


}
return 0;
}