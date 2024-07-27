/**
 *    author: BURHAN
 *    created: 15.07.2024 8:40:27
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 
void sol() 
{
    int n, k;
    cin>>n>>k;
 
    int ele_sq[200005];
    int size=1;  
    ele_sq[0]=n;
 
    int sp_count = 0;
    while (size<n) 
    {
        int curr_ele=ele_sq[size-1];
        size--;
 
        int sp_add=min(k-1,curr_ele-1);
        for (int i=0;i<sp_add;i++) 
        {
            ele_sq[size++]=1;
        }
        ele_sq[size++]=curr_ele-sp_add;
 
        sp_count++;
    }
 
    cout<<sp_count<<endl;
}
 
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) 
    {
        sol();
    }
    
    return 0;
}
