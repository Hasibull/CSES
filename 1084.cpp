/**
* Author: Hasibul Islam
* Created on: 2025-09-04 22:06
* Short Desc: 
* IDEA: 
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k, i, j = 0, ans = 0;
    vector<int> desire;
    vector<int> available;

    cin >> n >> m >> k;
    
    for (i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        desire.push_back(val);
    }

    for (i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        available.push_back(val);
    }

    sort(available.begin(), available.end());
    sort(desire.begin(), desire.end());
    
    for (i = 0; i < n; i++)
    {
        int low = desire[i] - k;
        int high = desire[i] + k;

        while (j < m)
        {
            if (available[j] > high)
                break;
            
            if (available[j] >= low && available[j] <= high)
            {
                ans++;
                j++;
                break;
            }
            j++;
        }
    }

    cout << ans << endl;

    return 0;
}