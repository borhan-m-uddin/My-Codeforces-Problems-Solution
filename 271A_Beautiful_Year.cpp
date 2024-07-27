/**
 *    author: BURHAN
 *    created: 07.05.2024 12:49:29
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool hasDistinctDigits(int year) {
    int digitCount[10] = {0};
 
    string yearString = to_string(year);
 
    for (char digit : yearString) {
        int index = digit - '0';
        if (digitCount[index] > 0) {
            return false;
        }
        digitCount[index]++;
    }
 
    return true;
}
 
int nextDistinctYear(int year) {
    while (!hasDistinctDigits(++year)) {}
    return year;
}

signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y;
    cin >> y;
    int result = nextDistinctYear(y);
    cout << result << endl;
    return 0;
}
