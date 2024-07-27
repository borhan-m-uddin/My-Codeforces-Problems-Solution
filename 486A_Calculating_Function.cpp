/**
 *    author: BURHAN
 *    created: 12.05.2024 14:03:02
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int fun(int n){
        if(n%2==0){
            return n/2;
        }
        else{
            return -((n+1)/2);
        }
}
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n; 
    cout<<fun(n)<<"\n";
    return 0;
}
