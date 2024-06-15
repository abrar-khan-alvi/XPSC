#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;

// Define the ordered set with policy-based data structure
typedef tree<
    pair<ll, int>,
    null_type,
    less<pair<ll, int>>,
    rb_tree_tag,
    tree_order_statistics_node_update>
    ordered_set;

void SlidingCost(int N, int K, vector<ll>& arr)
{
    // Ordered set to maintain elements and their original indices
    ordered_set os;

    // Iterate through the array
    for (int i = 0; i < N; i++) {
        // Remove the (i-K)th element so that window contains K elements
        if (i >= K) {
            os.erase({arr[i - K], i - K});
        }

        // Insert the current element with its index
        os.insert({arr[i], i});

        // Output the calculated cost for the current window
        if (i >= (K - 1)) {
            int median_pos = (K - 1) / 2;
            ll median = os.find_by_order(median_pos)->first;

            // Calculate the cost
            ll cost = 0;
            for (int j = 0; j < K; ++j) {
                if (j <= median_pos) {
                    cost += median - os.find_by_order(j)->first;
                } else {
                    cost += os.find_by_order(j)->first - median;
                }
            }

            cout << cost << " ";
        }
    }
}

int main()
{
    // Variables to store the size of the array and the size of the window
    int N, K;

    // Read input values for N and K
    cout << "Enter the size of the array (N): ";
    cin >> N;
    cout << "Enter the size of the window (K): ";
    cin >> K;

    // Declare the array
    vector<ll> arr(N);

    // Read input values for the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Call the SlidingCost function
    SlidingCost(N, K, arr);

    return 0;
}
