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
int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int k;
    cin >> k;

    for (int i = 0; i < k; ++i) {
        int l, r;
        cin >> l >> r;

        // Use two pointers to count numbers between l and r
        int left = lower_bound(arr.begin(), arr.end(), l) - arr.begin();
        int right = upper_bound(arr.begin(), arr.end(), r) - arr.begin();

        cout << right - left <<" ";
    }
    


}
return 0;
}