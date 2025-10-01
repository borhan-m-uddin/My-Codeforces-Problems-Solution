/**
 *    author: BURHAN
 *    created: 2025.10.01 01:35:33
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
        cin >> n >> m;
        string s; cin >> s;
        vector<long long> a(m);
        for (int i = 0; i < m; i++) cin >> a[i];

        // DSU for next white: parent[x] = next candidate after black x
        unordered_map<long long, long long> parent;
        parent.reserve((size_t)m + (size_t)n + 8);
        parent.max_load_factor(0.7f);

        auto find_next = [&](long long x) {
            // iterative find with path compression
            long long r = x;
            vector<long long> path;
            path.reserve(8);
            while (true) {
                auto it = parent.find(r);
                if (it == parent.end()) break;
                path.push_back(r);
                r = it->second;
            }
            for (long long v : path) parent[v] = r;
            return r;
        };

        auto mark_black = [&](long long x) {
            if (parent.find(x) != parent.end()) return;
            parent[x] = find_next(x + 1);
        };

        for (long long v : a) mark_black(v);

        long long prev_last = 1;
        for (int i = 0; i < n; i++) {
            long long cur_before;
            if (i == 0) cur_before = 1;
            else {
                if (s[i - 1] == 'B') cur_before = find_next(prev_last + 1);
                else cur_before = prev_last;
            }

            long long cur;
            if (s[i] == 'A') cur = cur_before + 1;
            else cur = find_next(cur_before + 1); 

            prev_last = cur;
            mark_black(cur);
        }

        vector<long long> blacks;
        blacks.reserve(parent.size());
        for (auto &kv : parent) blacks.push_back(kv.first);
        sort(blacks.begin(), blacks.end());

        cout << (long long)blacks.size() << '\n';
        for (auto v : blacks) cout << v << ' ';
        cout << '\n';
    }

    return 0;
}