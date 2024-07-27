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
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        int b[n-1];
        for(int i=0;i<n;i++){
          b[i]=max(a[i],a[i+1]);
        }
        int min=b[0];
    for(int i=0;i<n-1;i++){
        if(b[i]<min){
          min=b[i];
        }
    }
    cout<<min-1<<endl;
    }
    return 0;
}
