/**
 *    author: BURHAN
 *    created: 2025.10.02 00:04:51
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
        int n, m;
        string s;
        cin >> n >> m >> s;
        set<long long> a;
        for (int i = 1; i <= m; i++) {
            long long A; cin >> A; a.insert(A);
        }

        long long p = 1;
        for (char c : s) {
            ++p;
            if (c == 'B') {
                while (a.count(p)) ++p;
            }
            a.insert(p);
            if (c == 'B') {
                while (a.count(p)) ++p;
            }
        }

        cout << (long long)a.size() << '\n';
        for (auto A : a) cout << A << ' ';
        cout << '\n';
    }

    return 0;
}