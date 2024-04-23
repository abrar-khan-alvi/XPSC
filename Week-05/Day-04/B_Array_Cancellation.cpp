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
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll total=0;
        for(int i=0;i<n;i++){
            if(a[i]>0)
                total+=a[i];
            else if(a[i]<0){
                ll k=min(total,-a[i]);
                // cout<<"in "<<k<<"\n";
                a[i]+=k;
                total-=k;
            }
        }
        // cout<<"\n";
        // for(int i=0;i<n;i++)
        //     cout<<a[i]<<" ";
        // cout<<"\n";
        total=0;
        for(int i=0;i<n;i++){
            if(a[i]<0)
                total+=abs(a[i]);
        }
        cout<<total<<endl;

}
return 0;
}