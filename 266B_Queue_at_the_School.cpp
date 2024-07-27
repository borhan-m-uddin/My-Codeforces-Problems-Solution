/**
 *    author: BURHAN
 *    created: 09.05.2024 00:05:19
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
 
    for(int i=0;i<t;i++){
        for(int j=0;j<n-1;j++){
            if(s[j]=='B' && s[j+1]=='G'){
                swap(s[j],s[j+1]);
                ++j;
            }
        }
    }
    cout<<s;
    return 0;
}
