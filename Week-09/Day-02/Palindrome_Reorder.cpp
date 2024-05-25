#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
faster;
ll t;
t = 1;
//cin >> t;
while (t--) {
string s; 
cin >> s;
ll len = s.size(), cnt = 0;
map<char, ll> m;
for (ll i = 0; i < len; i++) m[s[i]]++;
for (auto it : m) {
    if (it.second % 2 != 0) cnt++;
}
if (cnt > 1) {
    cout << "NO SOLUTION" << endl;
} else {
    string s1 = "", mid = "";
    for (auto it : m) {
        string temp(it.second / 2, it.first);
        s1 += temp;
        if (it.second % 2 != 0) {
            mid = it.first;
        }
    }
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    cout <<  s1 + mid + s2 << endl;
}
}

    return 0;
}
