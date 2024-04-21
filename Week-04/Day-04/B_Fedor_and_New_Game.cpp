#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> arr(m);
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    
    int player;
    cin >> player;
    
    int count = 0;
    for(int i : arr) {
        int temp = player ^ i;
        
        bitset<32> bin_val(temp);
        int temp_count = 0;
        for(int j = 0; j < 32; j++) {
            if(bin_val[j]) {
                temp_count++;
                if(temp_count > k) {
                    break;
                }
            }
        }
        if(temp_count <= k) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}