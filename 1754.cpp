/**
* Author: Hasibul Islam
* Created on: 2025-08-10 18:09
* Short Desc: 
* IDEA: 
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int a, b;
        cin >> a >> b;

        if ((a % 3 != 0) && (a % 3 == b % 3))
            cout << "NO" << endl;
        else if ((b % 3 != 0) && (a % 3 == b % 3))
            cout << "NO" << endl;
        else if ((a == 0 && b != 0) || (a != 0 && b == 0))
            cout << "NO" << endl;
        else if (b < a && (a > b * 2))
            cout << "NO" << endl;
        else if (a < b && (b > a * 2))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    
    return 0;
}