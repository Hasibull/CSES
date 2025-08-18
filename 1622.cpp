/**
* Author: Hasibul Islam
* Created on: 2025-08-18 22:20
* Short Desc: permutation considering duplicate
* IDEA: generate all permutation and having a hash to check duplicate
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i, j, up = 1, low = 1;
    string str;
    char duplicate[30];
    memset(duplicate, 0, sizeof(duplicate));
    
    cin >> str;
    cin.ignore();

    for (i = 0; i < str.size(); i++)
    {
        up *= (i + 1);
        duplicate[str[i] - 'a']++;
    }

    for (i = 0; i < 30; i++)
    {
        if (duplicate[i] > 0)
        {
            for (j = 1; j <= duplicate[i]; j++)
            {
                low *= j;
            }
        }
    }

    cout << up / low << endl;
    
    return 0;
}