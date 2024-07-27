/**
 *    author: BURHAN
 *    created: 28.05.2024 10:25:19
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int count_move(long long a,long long b){
        if(a%b==0){
            return 0;
        }
        else{
            long long rem=a%b;
            return b-rem;
        }
}
 
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >>a>>b;
        cout<<count_move(a,b)<<endl;
    }
    return 0;
}
