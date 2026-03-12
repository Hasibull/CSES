/**
* Author: Hasibul Islam
* Created on: 2026-03-11 20:01
* Short Desc: Bipartite graph problem
* IDEA: it can be solve by both bfs/dfs!
*/

#include <bits/stdc++.h>

using namespace std;

void dfs(int start, vector<vector<int>> &graph, vector<int> &visited, int team, int *proceed)
{
    team += 1;
    (team % 3 == 0) ? team = 1 : team;
    visited[start] = team;

    for (auto n: graph[start])
    {
        if(!visited[n])
        {
            dfs(n, graph, visited, team, proceed);
        }
        else if(visited[n] == visited[start])
        {
            *proceed = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m, i;

    cin >> n >> m;

    if (n == 1)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    vector<vector<int>> graph(n + 1);
    vector<int> visited(n + 1);

    for (i = 0; i < m; i++)
    {
        int a, b;

        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (i = 1; i <= n; i++)
    {
        int proceed = 1;
        if (!visited[i])
        {
            dfs(i, graph, visited, 1, &proceed);
            if(!proceed)
            {
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        cout << visited[i] << " ";
    }
    cout << endl;

    return 0;
}