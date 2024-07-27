/**
 *    author: BURHAN
 *    created: 30.06.2024 09:05:32
**/
#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
 
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,a[i]+i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
