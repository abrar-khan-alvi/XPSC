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

while(t--)
{
string s,temp="";
ll cnt1=0,cnt2=0;
cin>>s;
ll n=s.size();
reverse(s.begin(), s.end());
for(ll i=0;i<n;i++){
    if(s[i]=='b') cnt1++;
    else if(s[i]=='B') cnt2++;
    else{
        if(s[i]>='a' && s[i]<='z' && cnt1>0){
            cnt1-=1;
        }
        else if(s[i]>='A' && s[i]<='Z' && cnt2>0){
            cnt2-=1;

        }
        else{
            temp+=s[i];
        }
    }

}
        reverse(temp.begin(),temp.end());
        cout << temp << endl;

}
return 0;
}