/**
 *    author: BURHAN
 *    created: 15.07.2024 9:37:49
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 
 
 
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
        
        int bitCount=0;
        int sequence[64]; 
        int bitPos[64];
 
        for (int i=0;i<64;i++) 
        {
            if (n&(1ll<<i)) 
            {
                bitPos[bitCount++]=(1ll<<i);
            }
        }
 
        int seqLen=1;
        sequence[0]=n;
        
        for (int i=0;i<bitCount;i++) 
        {
            if (n-bitPos[i]>0) 
            {
                sequence[seqLen++]=n-bitPos[i];
            }
        }
 
        cout<<seqLen<<endl;
        for (int i=seqLen-1;i>=0;i--) 
        {
            cout<<sequence[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
