#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;



bool binarySearch(vector<ll>& arr, ll target) {
    ll left = 0, right = arr.size() - 1;
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1; 
        }
    }
    return false; 
}

int main()
{
    faster;
    ll t;
    //cin >> t;
    t=1;
    while(t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for (ll i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        auto temp=lower_bound(arr.begin(),arr.end(),98126);
        cout<<*temp<<endl;

        for (ll i = 0; i < k; ++i) {
            ll q;
            cin >> q;
            if (binarySearch(arr, q)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
