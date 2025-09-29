/**
 *    author: BURHAN
 *    created: 29.09.2025 15:05:29
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

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int &x : a) cin >> x;
            
            sort(all(a));
            
            int max_diff = 0;
            for (int i = 0; i < n; i += 2) {
                max_diff = max(max_diff, abs(a[i+1] - a[i]));
            }
            
            cout << max_diff << endl;
        }
    return 0;
}