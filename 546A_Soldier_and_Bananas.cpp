/**
 *    author: BURHAN
 *    created: 02.05.2024 22:56:32
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,n,w;
    cin>>k>>n>>w;
    int pay=0;
    for(int i=1;i<=w;i++)
    {
        pay=pay+(i*k);
    }
    if(pay<=n)
    {
        cout<<"0";
    }
    else
    {
        cout<<pay-n;
    }
    return 0;
}
