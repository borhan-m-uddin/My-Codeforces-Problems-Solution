/**
 *    author: BURHAN
 *    created: 01.05.2024 00:15:29
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int year=0;
            if(a<=b)
        {
            while(a<=b)
            {
            a=a*3;
            b=b*2;
            year++;
            }
        }
    cout<<year;
    return 0;
}
