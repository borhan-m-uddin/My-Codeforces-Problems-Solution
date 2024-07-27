/**
 *    author: BURHAN
 *    created: 25.06.2024 9:35:36
**/
#include <bits/stdc++.h>
using namespace std;
 
int count_r(int a[],int n,int l,int r) 
{
    int c = 0;
    int c_s = 0;
    int s = 0;
    
    for (int end=0;end<n;end++) 
    {
        c_s += a[end];
        while(c_s>r&&s<=end) 
        {
            c_s -= a[s];
            s++;
        }
        
        if (c_s>=l&&c_s<=r) 
        {
            c++;
            c_s=0;
            s =end+1;
        }
    }
    
    return c;
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n,l,r;
        cin>>n>>l>>r;
        int a[n];
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        cout<<count_r(a,n,l,r)<<"\n";
    }
    
    return 0;
}
