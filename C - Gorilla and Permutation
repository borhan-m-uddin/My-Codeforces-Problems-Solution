/**
 *    author: BURHAN
 *    created: 11.07.2024 9:20:27
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
        int n,m,k;
        cin>>n>>m>>k;
 
        int p[n];
 
        for (int i=0;i<n-m;i++) 
        {
            p[i]=n-i;
        }
 
        for (int i=n-m;i<n;i++) 
        {
            p[i]=i-(n-m)+1;
        }
 
        for (int i=0;i<n;i++) 
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
