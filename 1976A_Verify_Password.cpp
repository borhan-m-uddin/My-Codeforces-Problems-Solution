/**
 *    author:  BURHAN
 *    created: 30.05.2024 21:10:36
**/
#include <bits/stdc++.h>
using namespace std;
 
bool st_pass(string s){
 
    int n=s.size();
    bool found_letter = false;
 
   for (int i = 0; i < n; ++i) {
        if (isdigit(s[i])) {
            if (found_letter) {
                return false;
            }
            if (i > 0 && isdigit(s[i-1]) && s[i] < s[i-1]) {
                return false;
            }
        } else {
            if (i > 0 && isalpha(s[i-1]) && s[i] < s[i-1]) {
                return false;
            }
            found_letter=true;
        }
    }
    return true;
}
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
 
        if (st_pass(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
  
  return 0;
}
