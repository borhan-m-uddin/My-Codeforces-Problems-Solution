/**
 *    author: BURHAN
 *    created: 11.07.2024 9:40:39
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
        int n,k;
        cin>>n>>k;
 
        int a[k];
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k);
        int sol=0;
        for(int i=0;i<k-1;i++)
        {
            if(a[i]==1)
            {
                sol+=1;
            }
            else 
            {
                sol+=a[i]*2-1;
            }
        }
        cout<<sol<<endl;
    }
    return 0;
}
