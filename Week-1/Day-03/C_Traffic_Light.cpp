#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    faster;
    ll t;
    // t=1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        char s1;
        string s;
        cin >> s1 >> s;
        if(s1=='g'){
            cout<<0<<endl;
        }
        else{
            if(s[n-1]=='g'){
            a[n-1]=n-1;
        }
        else{
            a[n-1]=0;
        }
        for(ll i=n-2;i>=0;i--){
            if(s[i]=='g') a[i]=i;
            else a[i]=a[i+1];
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]==s1){
                if(a[i]==0){
                    ans=max(ans,n-i+a[0]);
            }
            else{
                ans=max(ans,a[i]-i);
            }
            }
        }
        cout<<ans<<endl;
        }
    }
    return 0;
}