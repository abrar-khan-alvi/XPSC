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
    cin>>a>>b;
    ll len=a.size();
    ll len1=b.size();
    map<char,ll>mp,mp1;
    for(ll i=0;i<len;i++){
        mp[a[i]]++;
    }
    for(ll i=0;i<len1;i++){
        mp1[b[i]]++;
    }
    char x=a.back();
    char y=b.back();
    //for(auto it:mp) cout<<it.first<<" "<<it.second<<endl;
    //for(auto it:mp1) cout<<it.first<<" "<<it.second<<endl;
    //cout<<x<<" "<<y<<endl;
    if(x==y){
        //cout<<"="<<endl;
        if(x=='L' && y=='L'){
        if(mp['X']>mp1['X']) cout<<">"<<endl;
        else if(mp['X']<mp1['X']) cout<<"<"<<endl;
        else cout<<"="<<endl;
        }
        else if(x=='S' && y=='S'){
        if(mp['X']>mp1['X']) cout<<"<"<<endl;
        else if(mp['X']<mp1['X']) cout<<">"<<endl;
        else cout<<"="<<endl;
        }
        else cout<<"="<<endl;
    }
    else if(x>y){
        cout<<"<"<<endl;
    }
    else if(x<y){
        cout<<">"<<endl;
    }
    // if( mp['S']==mp1['S'] || mp['M']==mp1['M'] || mp['L']==mp1['L']){
    //     if(mp['X']>mp1['X']) cout<<">"<<endl;
    //     else if(mp['X']<mp1['X']) cout<<"<"<<endl;
    //     else cout<<"="<<endl;
    // }
    // else if( mp['L']!=0 && mp1['S']!=0 || mp['L']!=0 && mp1['M']!=0 || mp['M']!=0 && mp1['S']!=0){
    //     cout<<">"<<endl;
    // }
    // else if(mp['S']!=0 && mp1['L']!=0 || mp['S']!=0 && mp1['M']!=0 || mp['M']!=0 && mp1['L']!=0)
    // {
    //     cout<<"<"<<endl;
    // }
    


}
return 0;
}