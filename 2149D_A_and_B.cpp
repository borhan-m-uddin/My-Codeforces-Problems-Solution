/**
 *    author: BURHAN
 *    created: 2025.09.29 20:10:47
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        auto minSwaps = [&](char ch) -> int {
            vector<int> pos;
            for (int i = 0; i < n; i++) {
                if (s[i] == ch) pos.push_back(i);
            }
            
            if (pos.size() <= 1) return 0;
            
            int k = pos.size();
            
            auto calculateCost = [&](int start) -> long long {
                long long cost = 0;
                for (int i = 0; i < k; i++) {
                    cost += abs(pos[i] - (start + i));
                }
                return cost;
            };
            
            int left = 0, right = n - k;
            
            while (right - left > 2) {
                int m1 = left + (right - left) / 3;
                int m2 = right - (right - left) / 3;
                
                if (calculateCost(m1) > calculateCost(m2)) {
                    left = m1;
                } else {
                    right = m2;
                }
            }
            
            long long result = LLONG_MAX;
            for (int start = left; start <= right; start++) {
                result = min(result, calculateCost(start));
            }
            
            return result;
        };
        
        int result = min(minSwaps('a'), minSwaps('b'));
        cout << result << endl;
    }

    return 0;
}