/**
 *    author: BURHAN
 *    created: 30.04.2024 22:57:52
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1;
    cin>>s1;
    for(int i=0;i<s1.size();i++)
    {
        s1[0]=toupper(s1[0]);
        cout<<s1[i];
    }
    return 0;
}
