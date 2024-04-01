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
ll n,m;
cin>>n>>m;
ll a[n][m];
for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++) cin>>a[i][j];
}
ll sum=0;
for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        ll temp=0;
        ll x=i,k=j;
        while(x<n && k<m && x>=0 && k>=0){
            temp+=a[x][k];
            x--;
            k--;
        } //cout<<temp<<endl;
        x=i,k=j;
        while(x<n && k<m && x>=0 && k>=0){
            temp+=a[x][k];
            x--;
            k++;
        }//cout<<temp<<endl;
        x=i,k=j;
        while(x<n && k<m && x>=0 && k>=0){
            temp+=a[x][k];
            x++;
            k--;
        }//cout<<temp<<endl;
        x=i,k=j;
        while(x<n && k<m && x>=0 && k>=0){
            temp+=a[x][k];
            x++;
            k++;
        }
        temp-=a[i][j]*3;
        sum=max(temp,sum);
    }
}
cout<<sum<<endl;
}
return 0;
}