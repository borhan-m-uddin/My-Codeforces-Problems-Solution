/**
 *    author: BURHAN
 *    created: 20.05.2024 21:30:21
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

string createSortedDistinctString(const string &b) {
    bool seen[26]={false};
    string r="";
    for (char c:b){
        if (!seen[c - 'a']) {
            seen[c - 'a'] = true;
            r += c;
        }
    }
    sort(r.begin(),r.end());
    return r;
}
string decode(const string &b) {
    string r = createSortedDistinctString(b);
    int len = r.size();
 
    char decode_map[26];
    for(int i = 0; i < len; ++i){
        decode_map[r[i] - 'a'] = r[len - i - 1];
    }
 
    string s=b;
    for (int i=0; i<b.size();++i) {
        s[i]=decode_map[b[i]-'a'];
    }
 
    return s;
}
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
 
    for (int i=0;i<t;++i) {
        int n;
        string b;
        cin>>n>>b;
        cout<<decode(b)<<endl;
    }
    return 0;
}
