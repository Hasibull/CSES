/**
* Author: Hasibul Islam
* Created on: 2025-08-11 21:08
* Short Desc: Divide two into two tends to equal weighted group by weight
* IDEA: Find total sum then tries all possible subset sum and find minimum left over usign bit masking
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i, j;
    vector <int> weights;
    long long sum = 0, temp_sum = 0, ans = 1e9;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        sum += x;
        weights.push_back(x);
    }

    for (i = 0; i < (1 << n); i++)
    {
        temp_sum = 0;
        for (j = 0; j < n; j++)
        {
            if (i & (1 << j))
                temp_sum += weights[j];
        }

        ans = min(ans, abs(sum - (2 * temp_sum)));
    }

    cout << ans << endl;
    
    return 0;
}