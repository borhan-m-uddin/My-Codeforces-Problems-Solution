/**
 *    author: BURHAN
 *    created: 2025.09.30 14:09:40
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
        int n, k, l, r;
        cin >> n >> k >> l >> r;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> vals = a;
        sort(vals.begin(), vals.end());
        vals.erase(unique(vals.begin(), vals.end()), vals.end());
        vector<int> b(n);
        b.reserve(n);
        for (int i = 0; i < n; i++)
        {
            b[i] = (int)(lower_bound(vals.begin(), vals.end(), a[i]) - vals.begin());
        }
        int m = (int)vals.size();

        auto countAtMostKWithMaxLen = [&](int K, int Lmax) -> long long
        {
            if (K <= 0 || Lmax <= 0)
                return 0LL;
            vector<int> freq(m, 0);
            int distinct = 0;
            long long res = 0;
            int left = 0;
            for (int right = 0; right < n; right++)
            {
                if (freq[b[right]]++ == 0)
                    distinct++;
                while (distinct > K)
                {
                    if (--freq[b[left]] == 0)
                        distinct--;
                    left++;
                }
                int minStart = max(left, right - Lmax + 1);
                if (minStart <= right)
                    res += (right - minStart + 1);
            }
            return res;
        };

        long long ans = 0;
        ans = countAtMostKWithMaxLen(k, r) - countAtMostKWithMaxLen(k, l - 1) - countAtMostKWithMaxLen(k - 1, r) + countAtMostKWithMaxLen(k - 1, l - 1);

        cout << ans << '\n';
    }

    return 0;
}