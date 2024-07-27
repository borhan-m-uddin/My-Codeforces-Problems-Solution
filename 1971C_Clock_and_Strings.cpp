/**
 *    author: BURHAN
 *    created: 11.05.2024 02:20:43
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
        int x,y;
        cin>>x>>y;
        if(x>y){
            cout<<y<<" "<<x<<endl;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
