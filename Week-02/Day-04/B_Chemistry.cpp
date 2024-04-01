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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char, int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        int count = 0;
        for(auto i: m){
            if(i.second%2!=0){
                count++;
            }
        }
        if(k>=n){
            cout<<"NO"<<endl;
        }
        else if(k>=count-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


}
return 0;
}