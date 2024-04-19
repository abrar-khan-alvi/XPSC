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
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    bool flag = 0;
    int m = (1<<n);
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int bits = 0;bits<n;bits++){
            if(i &(1<<bits))sum+=arr[bits];
            else sum-=arr[bits];
        }
        
        if(sum%360==0){
            flag=1;
            break;
        }
    }
    
    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
return 0;
}