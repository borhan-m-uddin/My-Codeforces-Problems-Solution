/**
 *    author: BURHAN
 *    created: 03.05.2024 00:37:19
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
    string s;
    cin>>s;
    int anton=0;
    int danik=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                anton++;
        }
        else{
                danik++;
        }
        }
        if(anton==danik){
            cout<<"Friendship";
        }
        else if(anton>danik){
            cout<<"Anton";
        }
        else{
            cout<<"Danik";
        }
    return 0;
}
