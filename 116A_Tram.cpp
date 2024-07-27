/**
 *    author: BURHAN
 *    created: 03.05.2024 01:04:56
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int max_count=0;
    int capacity=0;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        for(int i=0;i<n;i++){
            max_count=max_count+(b[i]-a[i]);
 
            capacity = max(capacity, max_count);
            }
        cout<<capacity;
    return 0;
}
