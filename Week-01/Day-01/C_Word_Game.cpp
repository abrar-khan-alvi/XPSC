#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main()
{
    faster;
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string a[3][n];
    map<string,int>mp;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            mp[a[i][j]]++;
        }
    }
for (int i = 0; i < 3; i++) {
		int tot = 0;
		for (int j = 0; j < n; j++) {
			if (mp[a[i][j]] == 1) {tot += 3;}
			else if (mp[a[i][j]] == 2) {tot++;}
		}
		cout << tot << ' ';
}
cout<<endl;
 
 
}
 
  return 0;
}