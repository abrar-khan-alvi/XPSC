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
        int n, i, j;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        int m = n;
        int k = 0;

        while (m--) {
            int x;
            cin >> x;
            char s[x];
            cin >> s;
            for (j = 0; j < x; j++) {
                if (s[j] == 'D') {
                    if (a[k] == 9)
                        a[k] = 0;
                    else
                        a[k]++;
                } else {
                    if (a[k] == 0)
                        a[k] = 9;
                    else
                        a[k]--;
                }
            }
            k++;
        }
        for (i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;

}
return 0;
}