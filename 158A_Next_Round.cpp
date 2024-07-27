/**
 *    author: BURHAN
 *    created: 28.04.2024 22:11:33
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int next_Round(int a[],int n,int k)
{
    int Count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        {
            Count++;
        }
    }
    return Count;
}

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<next_Round(a,n,k);
    return 0;
}
