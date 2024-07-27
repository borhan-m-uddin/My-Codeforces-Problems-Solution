/**
 *    author: BURHAN
 *    created: 09.05.2024 01:14:43
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int p,q;
    int one_c=0;
    for(int i=0;i<n;i++){
            cin>>p>>q;
        if(q-p>=2){
            one_c++;
        }
    }
        cout<<one_c;
    return 0;
}
