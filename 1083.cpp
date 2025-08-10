/**
* Author: Hasibul Islam
* Created on: 2025-08-10 18:01
* Short Desc: find missing number from sequence 1, 2,..., n
* IDEA: Sum of 1 to n should be (n * (n + 1)) / 2, missing
* number will be the subtruct of actual sum
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int i;
    long long n, sum = 0;

    cin >> n;
    for (i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;

        sum += x;
    }

    cout << ((n * (n + 1)) / 2) - sum << endl; 

    return 0;
}