/**
 *    author: BURHAN
 *    created: 26.04.2024 21:20:29
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main() 
{
    int n;
    cin>>n;
    int sol[n][3];
    int T_sol=0;
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>sol[i][j];
        }
    }
  int j;
  int sum;
     for(int i=0;i<n;i++)
    {
             sum=0;
        for(j=0;j<3;j++)
        {
                sum=sum+sol[i][j];
        }
        if(sum>=2)
        {
            T_sol++;
        }
    }
    cout<<T_sol;
}