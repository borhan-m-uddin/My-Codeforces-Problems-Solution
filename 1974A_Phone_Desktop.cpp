/**
 *    author: BURHAN
 *    created: 23.05.2024 23:03:24
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		int sum = 0;
		sum = (y + 1) / 2;
		int a = sum * 15 - y * 4;
		if (a >= x)
		{
			cout << sum << endl;
		}
		else
		{
			sum += (x - a + 14) / 15;
			cout << sum << endl;
		}
	}
    return 0;
}
