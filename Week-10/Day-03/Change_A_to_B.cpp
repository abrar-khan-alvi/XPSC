#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
ll t;
cin >> t;

while (t--) {
ll a, b, k;
cin >> a >> b >> k;
ll cnt = 0;
while (b > a) {
if (b % k == 0) {
ll next_value = b / k;
if (next_value >= a) {
    b = next_value;
    cnt++;
} else {
    
    cnt += b - a;
    break;
}
} 
else {
ll dec = b % k;
if (b - dec < a) {
    cnt += b - a;
    break;
} else {
    b -= dec;
    cnt += dec;
}
}
}
if (b < a) {
    cnt += (a - b);
}
cout << cnt << endl;
}
    return 0;
}
