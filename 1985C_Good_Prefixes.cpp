/**
 *    author: BURHAN
 *    created: 11.06.2024 08:30:20
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
            int n;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            int p=0;
            int h=0;
            int c=0;
            for(int i=0;i<n;i++){
            p=max(p,a[i]);
            h+=a[i];
            if(p*2==h){
                c++;
            }
            }
 
            cout<<c<<endl;
 
        }
}
