/**
 *    author: BURHAN
 *    created: 30.04.2024 19:45:29
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int moves = 0;
    for (int i = 0; i < 5;i++) 
    {
        for (int j = 0; j < 5;j++) 
        {
            int num;
            cin >> num;
            if (num == 1) 
            {
                moves = abs(i - 2) + abs(j - 2);
            }
        }
    }
    cout << moves << endl;
    return 0;
}
