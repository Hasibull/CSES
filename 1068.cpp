/**
* Author: Hasibul Islam
* Created on: 2025-08-10 11:37
* Short Desc: n odd then n = (n * 3) + 1 else n = n / 2
* IDEA: having large enough data type for n
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;

    while (n != 1)
    {
        cout << n << " ";
        if (n & 1)
            n = (n * 3) + 1;
        else
            n /= 2;
    }

    cout << n << endl;

    return 0;
}