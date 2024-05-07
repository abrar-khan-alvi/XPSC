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
    int len;
    bool flag = true;
    cin >> len;
    cout << 'a';
 
    if(len == 1)
        flag = false;
 
    if(flag) {
        cout<<'b';
 
        char ch1='a';
        char ch2='b';
 
        for(int i = 2; i < len; i++){
            if(ch1 == 'a'){
                cout <<'b';
                ch1 = ch2;
                ch2 = 'b';
            }
            else if(ch1 != 'a') {
                cout << 'a';
                ch1 = ch2;
                ch2 = 'a';
            }
        }
    }
    cout << "\n";


}
return 0;
}