/**
 *    author: BURHAN
 *    created: 15.07.2024 9:10:27
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 
void sol() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int v[200005];  
    int v_size = 0; 
    char prev = '1';
 
    for (int i=0;i<n;i++) 
    {
        if(s[i]=='1') v[v_size++]=1;
        if(s[i]=='0'&&prev=='1') v[v_size++]=0;
        prev=s[i];
    }
 
    int n0=0,n1=0;
    for(int i=0;i<v_size;i++) {
        if(v[i]==1)n1++;
        else n0++;
    }
 
    if (n0 >= n1)
    {
        cout<<"NO"<<endl;
    } 
    else 
    {
        cout << "YES" << endl;
    }
}
 
 
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) 
    {
        sol();
    }
    
    return 0;
}
