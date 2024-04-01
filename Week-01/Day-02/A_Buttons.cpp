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
ll a,b;cin>>a>>b;
ll arr[]={(a-1+a),(b-1+b),(a+b)};
sort(arr,arr+3);
cout<<arr[2]<<endl;
}
return 0;
}