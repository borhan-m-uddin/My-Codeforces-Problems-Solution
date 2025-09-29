/**
 *    author: BURHAN
 *    created: 2025.09.29 18:46:19
**/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
typedef vector<int> vi;
typedef pair<int, int> pii;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Count frequency of each number
        vector<bool> present(k, false);
        int count_k = 0;
        
        for (int x : a) {
            if (x < k) {
                present[x] = true;
            } else if (x == k) {
                count_k++;
            }
        }
        
        int missing = 0;
        for (int i = 0; i < k; i++) {
            if (!present[i]) {
                missing++;
            }
        }
        
        int operations = max(missing, count_k);
        
        cout << operations << endl;
    }

    return 0;
}