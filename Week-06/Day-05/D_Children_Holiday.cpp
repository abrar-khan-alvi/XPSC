#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl '\n'
#define faster ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

struct asst {
    ll t, z, y;
};

ll countMaxBalloons(ll t, ll z, ll y, ll Time) {
    ll batchTime = (z * t) + y;
    ll batchCount = (Time / batchTime);
    ll remTime = Time % batchTime;
    ll totalBalloons = 0;
    totalBalloons += (batchCount * z);
    if (remTime != 0) {
        if (remTime / t >= z) {
            totalBalloons += z;
        } else {
            totalBalloons += (remTime / t);
        }
    }
    return totalBalloons;
}

bool isBalloonPossible(ll t, ll z, ll y, ll balloons, ll Time) {
    ll batchTime = (z * t) + y;
    ll batches = balloons / z;
    bool ok = (balloons % z == 0);
    ll currTime = 0;
    if (ok) {
        batches -= 1;
        currTime = (batchTime * batches) + (z * t);
    } else {
        currTime = (batchTime * batches) + ((balloons % z) * t);
    }
    return (currTime <= Time);
}

bool isPossible(asst *assistant, int n, ll m, ll Time) {
    ll totalBalloons = 0;
    for (int i = 0; i < n; i++) {
        ll t = assistant[i].t;
        ll z = assistant[i].z;
        ll y = assistant[i].y;
        ll lo = 0, hi = (ll) 1e9;
        while (hi > lo + 1) {
            ll balloons = (lo + hi) >> 1;
            if (isBalloonPossible(t, z, y, balloons, Time)) {
                lo = balloons;
            } else {
                hi = balloons;
            }
        }
        totalBalloons += lo;
    }
    return (totalBalloons >= m);
}

int main() {
    faster;
    ll t;
    //cin >> t;
    t=1;
    while (t--) {
        ll m, n;
        cin >> m >> n;
        asst assistant[n];
        for (int i = 0; i < n; i++) {
            cin >> assistant[i].t >> assistant[i].z >> assistant[i].y;
        }
        ll minTime = -1, maxTime = (ll) 1e9;
        while (maxTime > minTime + 1) {
            ll Time = (minTime + maxTime) >> 1;
            if (isPossible(assistant, n, m, Time)) {
                maxTime = Time;
            } else {
                minTime = Time;
            }
        }
        cout << maxTime << endl;
        ll count[n];
        memset(count, 0, sizeof count);
        for (int i = 0; i < n; i++) {
            ll t = assistant[i].t;
            ll z = assistant[i].z;
            ll y = assistant[i].y;
            count[i] = countMaxBalloons(t, z, y, maxTime);
        }
        ll totalBalloons = 0;
        for (int i = 0; i < n; i++) {
            if (totalBalloons + count[i] <= m) {
                cout << count[i] << " ";
                totalBalloons += count[i];
            } else {
                if (totalBalloons == m) {
                    cout << 0 << " ";
                } else {
                    cout << (m - totalBalloons) << " ";
                    totalBalloons = m;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
