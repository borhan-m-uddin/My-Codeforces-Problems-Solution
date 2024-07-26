/**
 *    author: BURHAN
 *    created: 30.04.2024 22:11:33
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
    string result;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='1' || s1[i]=='2' || s1[i]=='3')
        {
            sort(s1.begin(), s1.end());
            if (s1[i]=='+')
            {
                continue;
            }
            if (i < s1.size() - 1 && s1[i + 1] != '+') 
            {
                result += s1[i];
                result += '+';
            } 
            else 
            {
                result += s1[i];
            }
 
        }
 
    }
    cout << result << endl;
    return 0;
}
