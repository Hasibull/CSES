/**
* Author: Hasibul Islam
* Created on: 2026-03-08 20:43
* Short Desc: Finding number of edge require to make the graph connected
* IDEA: simple bfs and connect not visited node to any already visited node
*/

#include <bits/stdc++.h>

using namespace std;

void bfs(int start, vector<vector<int>> &graph, vector<int> &visited)
{
    queue<int> q;

    visited[start] = 1;
    q.push(start);

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto value: graph[node])
        {
            if (!visited[value])
            {
                q.push(value);
                visited[value] = 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, i = 0, ans = 0;
    vector<pair<int, int>> nodes;
    
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    vector<int> visited(n + 1);

    while (i < m)
    {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
        i++;
    }

    for (i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            bfs(i, graph, visited);
            if (i - 1 <= 0)
                continue;
            ans++;
            nodes.push_back(make_pair(i, i-1));
        }    
    }

    cout << ans << endl;
    for (i = 0; i < ans; i++)
    {
        cout << nodes[i].first << " " << nodes[i].second << endl;
    }
    
    return 0;
}