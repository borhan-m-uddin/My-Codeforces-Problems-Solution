/**
 *    author: BURHAN
 *    created: 07.06.2024 06:30:33
**/
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x,y;
        cin >> x>>y;
        
        for (int i = 0; i < 30; i++) {
            if((x&(1<<i))!=(y&(1<<i))){
                cout<<(1<<i)<<"\n";
                break;
            }
        }
    }
    return 0;
}
