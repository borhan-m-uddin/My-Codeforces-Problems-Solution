/**
 *    author: BURHAN
 *    created: 28.04.2024 23:39:28
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int Domino_piling(int n,int k)
{
    int Count=0;
    int p=2;
    for(int i=1;i<n*k;i=i+p)
        {
            Count++;
        }
    return Count;
}
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    cout<<Domino_piling(n,k);
    return 0;
}
