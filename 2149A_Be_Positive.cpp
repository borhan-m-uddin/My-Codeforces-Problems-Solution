/**
 *    author: BURHAN
 *    created: 29.09.2025 1:15:19
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
            int total_num_operations = 0;
            int zero_count = count(a.begin(), a.end(), 0);
            total_num_operations += zero_count;
            int minus_count = count(a.begin(), a.end(), -1);
            if (minus_count%2 == 1) 
            {
               total_num_operations += 2;
            }
            cout << total_num_operations << endl;


        }
    return 0;
}