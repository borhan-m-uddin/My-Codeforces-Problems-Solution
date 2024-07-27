/**
 *    author: BURHAN
 *    created: 11.06.2024 09:55:12
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
            int o_x=0;
            int m_sum=0;
            int sum=0;
 
            for(int x=2;x<=n;x++){
                int k=n/x;
                sum=x*k*(k+1)/2;
 
                if(sum>m_sum){
                    m_sum=sum;
                    o_x=x;
                }
            }
            cout<<o_x<<endl;
        }
}
