/**
 *    author: BURHAN
 *    created: 30.06.2024 09:20:27
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
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count=0;
        int x = a[0];
        for(int i=1;i<n;i++)
        {
            x=max(x,a[i]);
            if(x>a[i])
            {
                b[count++]=x-a[i];
            }
        }
            if(count==0)
            {
                cout<<count<<endl;
            }
            else
            {
                sort(b,b+count);
                int ans = b[count-1], y=0;
                for (int i=0;i<count;i++) 
                {
                    ans+=(b[i]-y)*(count-i);
                    y=b[i];
                }
                cout<<ans<<endl;
 
            }
    }
    return 0;
}
