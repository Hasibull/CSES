/**
* Author: Hasibul Islam
* Created on: 2025-08-15 21:46
* Short Desc: The well known tower of Hanoi problem
* IDEA:  1. n-1 pile from A to B using C, 2. A to C, 3. n-1 pile from B to C using A
*/

#include <bits/stdc++.h>

using namespace std;

void tower_of_hanoi(int n, int a, int b, int c, vector<pair<int, int>> &ans)
{
    if (n > 0)
    {
        tower_of_hanoi(n - 1, a, c, b, ans);
        ans.push_back(make_pair(a, c));
        tower_of_hanoi(n - 1, b, a, c, ans);
    }
} 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, i;
    vector<pair<int, int>> ans;

    cin >> n;

    tower_of_hanoi(n, 1, 2, 3, ans);

    cout << ans.size() <<endl;

    for (i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second <<endl;
    }

    return 0;
}