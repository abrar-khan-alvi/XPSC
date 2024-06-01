#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    faster;
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        string s;
        cin >> n >> s;

        map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }

        bool isValid = true;
        ll vertical_moves = freq['N'] + freq['S'];
        ll horizontal_moves = freq['E'] + freq['W'];

        if (vertical_moves % 2 != 0 || horizontal_moves % 2 != 0) {
            isValid = false;
        }

        if (!isValid) {
            cout << "NO" << endl;
        } else {
            map<char, int> half_freq;
            ll cnt1 = 0, cnt2 = 0;

            for (auto it:freq) {
                char ch = it.first;
                int freq_count = it.second;

                if (ch == 'N' || ch == 'S') {
                    half_freq[ch] = freq_count / 2 + (freq_count % 2);
                } else {
                    half_freq[ch] = freq_count / 2;
                }
                cnt1 += half_freq[ch];
                cnt2 += freq_count - half_freq[ch];
            }

            if (cnt1 == 0 || cnt2 == 0) {
                cout << "NO" << endl;
                continue;
            }

            for (char ch : s) {
                if (half_freq[ch] > 0) {
                    cout << 'R';
                    half_freq[ch]--;
                } else {
                    cout << 'H';
                }
            }
            cout << endl;
        }
    }

    return 0;
}
