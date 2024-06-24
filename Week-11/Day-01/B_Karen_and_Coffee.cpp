#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX_N = 2e5 + 10;

int main() {
    faster;

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> psum(MAX_N, 0);
    while (n--) {
        int l, r;
        cin >> l >> r;
        psum[l]++;
        if (r + 1 < MAX_N)
            psum[r + 1]--;
    }
    for (int i = 1; i < MAX_N; ++i) {
        psum[i] += psum[i - 1];
    }
    vector<int> good(MAX_N, 0);
    for (int i = 0; i < MAX_N; ++i) {
        good[i] = (psum[i] >= k);
        if (i > 0)
            good[i] += good[i - 1];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << (a > 0 ? good[b] - good[a - 1] : good[b]) << endl;
    }

    return 0;
}
