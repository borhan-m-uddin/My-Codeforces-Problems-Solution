/**
 *    author: BURHAN
 *    created: 26.04.2024 18:20:49
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

 string canDivideWatermelon(int weight) 
{
    if (weight % 2 == 0 && weight > 2) 
    {
        return "YES";  
    } 
    else 
    {
        return "NO";  
    }
}

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int weight;
    cin >> weight; 
    cout << canDivideWatermelon(weight) << endl;           
    return 0;
}