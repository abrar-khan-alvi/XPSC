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
ll n;
        cin >> n;
        ll a = 1;
        ll b = 0;
        ll cnt = 0;
        while (a * 2 <= n)
        {
            a *= 2;
            cnt++;
        }
        ll ans =1;
        bool flag = false;
        for (int i = cnt - 1; i >= 0; i--)
        {
            if (n & 1 << i)
            {
                b = b | (1<< i);
                flag = true;
            }
            else
            {
                if(flag==true)
                {
                    ans*=2;
                }
            }
        }
        cout<<ans<<endl;


}
return 0;
}