/**
 *    author:  BURHAN
 *    created: 02.06.2024 18:16:42
**/
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
const int MAXN = 200010;
int a[MAXN], b[MAXN];
 
void solve() {
    int n;
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n + 1; i++) {
        cin >> b[i];
    }
 
    int total_diff = 0;
    for (int i = 1; i <= n; i++) {
        total_diff += abs(a[i] - b[i]);
    }
 
    int x = b[n + 1];
    total_diff++;
 
    int min_dis = LLONG_MAX;
    bool found = false;
 
    for (int i = 1; i <= n; i++) {
        int max_val = max(a[i], b[i]);
        int min_val = min(a[i], b[i]);
 
        if (x <= max_val && x >= min_val) {
            found = true;
            break;
        }
 
        min_dis = min({min_dis, abs(x - a[i]), abs(x - b[i])});
    }
 
    if (!found) {
        total_diff += min_dis;
    }
 
    cout << total_diff << endl;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}
