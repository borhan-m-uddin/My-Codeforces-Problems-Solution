/**
 *    author: BURHAN
 *    created: 25.06.2024 8:40:59
**/
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int t;
    cin >> t;
    while (t--)
    {
           int x1,x2,y1,y2;
           cin>>x1>>y1>>x2>>y2;
        int d1=x1-y1;
        int d2=x2-y2;
 
        if ((d1>0&&d2>0)||(d1<0&&d2<0)||d1==d2) 
        {
            cout<<"YES"<<endl;
        } 
        else 
        {
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
}
