/**
 *    author: BURHAN
 *    created: 11.07.2024 8:45:27
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
        int a,b,c;
        cin>>a>>b>>c;
 
        int arr[3]={a,b,c};
 
        sort(arr,arr+3);
 
        for(int i=0;i<5;i++)
        {
            arr[0]++;
            sort(arr,arr+3);
        }
        
        cout<<arr[0]*arr[1]*arr[2]<<endl;
        
    }
    return 0;
}
