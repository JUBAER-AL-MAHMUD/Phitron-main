#include <bits/stdc++.h>
using namespace std;

char grid[100][100];
bool visited[100][100];
int n, m;

vector<pair<int, int>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{

    if (i < 0 || i >= n)
        return false;

    if (j < 0 || j >= m)
        return false;
    if (grid[i][j] == '#')
        return false;

    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
cout << par.first << " " << par.second << endl;
        int pi = par.first;
        int pj = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci, cj;

            ci = pi + moves[i].first;
            cj = pj + moves[i].second;
            pair<int, int> child = {ci, cj};
            if (valid(ci, cj) && !visited[ci][cj])
            {

                q.push({ci, cj});
                visited[ci][cj] = true;
            }
        }
    }
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);

    return 0;
}