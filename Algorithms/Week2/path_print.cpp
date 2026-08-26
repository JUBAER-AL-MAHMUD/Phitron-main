#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];
int parentt[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        visited[parent] = true;

        

        for (int child : adj_list[parent])
        {
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
                parentt[child] = parent;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parentt, -1, sizeof(parentt));
    int src, dst;
    cin >> src >> dst;
    bfs(src);
    for (int i = 1; i <= n; i++)
    {
        cout <<i << " parent->" << parentt[i] << endl;   
    }

    cout<< level[dst]<<endl;

    return 0;
}