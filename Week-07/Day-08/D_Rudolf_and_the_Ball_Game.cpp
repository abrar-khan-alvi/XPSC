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
    ll n,m,x;
    cin>>n>>m>>x;
    set<ll>st;
    st.insert(x);
    while(m--)
    {
        set<ll>temp;
        ll dis;
        char ch;
        cin>>dis>>ch;
        if(ch=='0')
        {
            for(auto it:st)
            {
                ll pos=(it+dis)%n;
                if(pos==0)
                    pos=n;
                temp.insert(pos);
            }
        }
        else if(ch=='1')
        {
            for(auto it:st)
            {
                ll pos=(((it-dis)%n)+n)%n;
                if(pos==0)
                    pos=n;
                temp.insert(pos);
            }
        }
        else
        {
            for(auto it:st)
            {
                ll pos1=(it+dis)%n;
                if(pos1==0)
                    pos1=n;
                temp.insert(pos1);
                ll pos=(((it-dis)%n)+n)%n;
                if(pos==0)
                    pos=n;
                temp.insert(pos);
            }
        }
        st=temp;
    }
    cout<<st.size()<<endl;
    for(auto it:st)
    {
        cout<<it<<" ";
    }
    cout<<endl;


}
return 0;
}