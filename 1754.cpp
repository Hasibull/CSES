/**
* Author: Hasibul Islam
* Created on: 2025-08-10 18:09
* Short Desc: perform get 2 from one coin pile and 1 from another pile
* IDEA: checking divisibility by 3 and checking 0 or more than double of one another.
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

        if ((a > (b * 2)) || (b > (a * 2)))
        {
            cout << "NO" << endl;
        }
        else if (a % 3 == 0 && b % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else if (((a % 3) == 1 && (b % 3) == 2) || ((a % 3) == 2 && (b % 3) == 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}