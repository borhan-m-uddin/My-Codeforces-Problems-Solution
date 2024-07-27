/**
 *    author: BURHAN
 *    created: 02.05.2024 23:22:24
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
 
    int Count_u=0;
    int Count_l=0;
 
    for(int i=0;i<s.size();i++){
            char c=s[i];
        if(islower(c)){
            Count_l++;
        }
        else if(isupper(c)){
            Count_u++;
        }
    }
 
 
    if(Count_l<Count_u){
        for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
        }
            cout<<s;
    }
    else{
        for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        }
            cout<<s;
    }
    return 0;
}
