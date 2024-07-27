/**
 *    author:  BURHAN
 *    created: 03.06.2024 20:55:42
**/
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int problem_need(int n,int m,string a)
{
  int count[7] = {0};
 
        for (int i = 0; i < n;i++) 
        {
            count[a[i]-'A']++;
        }
        int problems_needed=0;
 
        for (int i=0;i<7;i++) 
        {
            if (count[i] < m) 
            {
                problems_needed+=(m-count[i]);
            }
        }
        return problems_needed;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) 
    {
      int n,m;
      cin>>n>>m;
      string a;
      cin>>a;
      cout<<problem_need(n,m,a)<<endl;
    }
 
    return 0;
}
