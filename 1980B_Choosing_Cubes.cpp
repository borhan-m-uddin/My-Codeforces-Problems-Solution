/**
 *    author:  BURHAN
 *    created: 03.06.2024 10:6:12
**/
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
void problem_need(int a[],int n,int f,int k)
{
  f=a[f-1];
  sort(a, a + n, greater<int>());
 
        int c_fav = count(a, a + k, f);
        int t_fav = count(a, a + n, f);
        
        if (c_fav == 0) {
            cout << "NO" << endl;
        } else if (t_fav == c_fav) {
            cout << "YES" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
} 
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) 
    {
      int n,f,k;
      cin>>n>>f>>k;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      problem_need(a,n,f,k);
    }
 
    return 0;
}
