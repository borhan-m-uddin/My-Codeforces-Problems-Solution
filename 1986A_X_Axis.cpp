/**
 *    author: BURHAN
 *    created: 23.06.2024 08:52:33
**/
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y,z;
        cin>>x>>y>>z;
        int arr[3]={x,y,z};
        sort(arr,arr+3);
        int difference=arr[2]-arr[0];
        cout<<difference<<endl;
    }    
    return 0;
}
