/**
 *    author: BURHAN
 *    created: 11.06.2024 09:10:52
**/
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int t;
        cin >>t;
        while(t--)
        {
            int n,m;
            cin>>n>>m;
            string a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
        int top = n, bottom = -1, left = m, right = -1;
 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if (a[i][j]=='#')
                {
                    if (i<top)
                        top=i;
                    if (i > bottom) 
                        bottom = i;
                    if (j<left) 
                        left=j;
                    if (j > right) 
                        right = j;
                }
            }
        }
 
        int X=(top+bottom)/2+1;
        int Y=(left+right)/2+1;
        cout<<X<<" "<<Y<<endl;
                
 
        }
}
