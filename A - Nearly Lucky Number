/**
 *    author: BURHAN
 *    created: 03.05.2024 00:03:24
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    int d;
    int luckyDigitCount = 0;
    while (n != 0) {
        int d = n % 10;
        if (d == 4 || d == 7) {
            luckyDigitCount++;
        }
        n /= 10;
    }
    if(luckyDigitCount==4||luckyDigitCount==7){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    return 0;
}
