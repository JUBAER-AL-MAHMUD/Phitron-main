#include <bits/stdc++.h>
using namespace std;

int N, M;
char a[1005][1005];

bool visited[1005][1005];
pair<int, int> parent[1005][1005];

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;

    q.push({si, sj});
    visited[si][sj] = true;

    int Dx[] = {0, 0, -1, 1};
    int Dy[] = {1, -1, 0, 0};

    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();

        for (int k = 0; k < 4; k++)
        {
            int ni = i + Dx[k];
            int nj = j + Dy[k];

            if (ni >= 0 && ni < N && nj >= 0 && nj < M)
            {
                if (a[ni][nj] != '#' && !visited[ni][nj])
                {
                    visited[ni][nj] = true;
                    parent[ni][nj] = {i, j};

                    q.push({ni, nj});
                }
            }
        }
    }
}

int main()
{
    cin >> N >> M;

    int Si, Sj;
    int Di, Dj;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];

        for (int j = 0; j < M; j++)
        {
            if (a[i][j] == 'R')
            {
                Si = i;
                Sj = j;
            }

            if (a[i][j] == 'D')
            {
                Di = i;
                Dj = j;
            }
        }
    }

    bfs(Si, Sj);

    if (!visited[Di][Dj])
    {
        for (int i = 0; i < N; i++)
            cout << a[i] << endl;

        return 0;
    }

    int i = Di;
    int j = Dj;

    while (i != Si || j != Sj)
    {
        if (a[i][j] != 'D')
            a[i][j] = 'X';

        int pi = parent[i][j].first;
        int pj = parent[i][j].second;

        i = pi;
        j = pj;
    }

    for (int i = 0; i < N; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}