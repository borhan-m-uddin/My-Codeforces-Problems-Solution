/**
 *    author: BURHAN
 *    created: 16.06.2024 04:15:30
**/
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int calculateProfit(int n, int a, int b, int k) {
    int m_p = k * (b + (b - k + 1)) / 2;
    int r_p = (n - k) * a;
    return m_p + r_p;
}
 
int findMaxProfit(int n, int a, int b) {
    int low = 0, high = min(n, b);
    int max_profit = 0;
 
    while (low <= high) {
        int mid1 = low + (high - low) / 3;
        int mid2 = high - (high - low) / 3;
 
        int profit1 = calculateProfit(n, a, b, mid1);
        int profit2 = calculateProfit(n, a, b, mid2);
 
        max_profit = max({max_profit, profit1, profit2});
 
        if (profit1 > profit2) {
            high = mid2 - 1;
        } else {
            low = mid1 + 1;
        }
    }
 
    return max_profit;
}
 
signed main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        cout << findMaxProfit(n, a, b) << "\n";
    }
 
    return 0;
}
