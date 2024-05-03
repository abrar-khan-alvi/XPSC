#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


bool isSubsequence(string t,string p,vector<bool> deleted) {
    int j = 0;
    for (int i = 0; i < t.length() && j < p.length(); ++i) {
        if (!deleted[i] && t[i] == p[j]) {
            ++j;
        }
    }
    return j == p.length();
}

int main() {
faster;

    string t, p;
    cin >> t >> p;

    vector<int> perm(t.length());
    for (int i = 0; i < t.length(); ++i) {
        cin >> perm[i];
        --perm[i];
    }

    int low = 0, high = t.length() - p.length();
    while (low <= high) {
        int mid = low + (high - low) / 2;
        vector<bool> deleted(t.size(), false);
        for (int i = 0; i <= mid; ++i) {
            deleted[perm[i]] = true;
        }

        if (isSubsequence(t, p, deleted)) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << high+1 << endl;
    return 0;
}
