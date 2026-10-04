#include <bits/stdc++.h>
using namespace std;

int N, M;
char grid[1005][1005];
bool vis[1005][1005];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool valid(int i, int j)
{
    if (i < 0 || i >= N || j < 0 || j >= M)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int x = p.first;
        int y = p.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (valid(nx, ny) == true && vis[nx][ny] == false && grid[nx][ny] == '.')
            {
                q.push({nx, ny});
                vis[nx][ny] = true;
            }
        }
    }
}

int main()
{

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> grid[i][j];
        }
    }

    int Si, Sj;
    cin >> Si >> Sj;

    int Di, Dj;
    cin >> Di >> Dj;

    if (grid[Si][Sj] == '-' || grid[Di][Dj] == '-')
    {
        cout << "NO\n";
    }
    else
    {
        bfs(Si, Sj);

        if (vis[Di][Dj] == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}