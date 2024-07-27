/**
 *    author: BURHAN
 *    created: 15.07.2024 9:37:49
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int i,j;
        if(n==1 && m==1)
        {
            cout<<-1<<endl;
        }
        else if(n>1)
        {
          
        for(i=1;i<n;i++)
        {
            for( int j=m-1;j>=0;j--)
            {
                cout<<a[i][j]<<" ";
            }
                cout<<endl;
        }
        for(i=0;i<1;i++)
        {
            for(int j=m-1;j>=0;j--)
            {
                cout<<a[i][j]<<" ";
            }
                cout<<endl;
        }
        }
        else{
            i=0;
            for(j=1;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<a[0][0];
            cout<<endl;
        }
    }
    return 0;
}
