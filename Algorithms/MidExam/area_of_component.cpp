#include <bits/stdc++.h>
using namespace std;

int N, M;
char a[1005][1005];

int dfs(int i, int j)
{
    if (i < 0 || i >= N || j < 0 || j >= M)
        return 0;

    if (a[i][j] == '-')
        return 0;

    a[i][j] = '-';

    int area = 1;

    area += dfs(i - 1, j);
    area += dfs(i + 1, j);
    area += dfs(i, j - 1);
    area += dfs(i, j + 1);

    return area;
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a[i][j];
        }
    }

    int minimum = INT_MAX;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (a[i][j] == '.')
            {
                int area = dfs(i, j);

                minimum = min(minimum, area);
            }
        }
    }

    if (minimum == INT_MAX)
        cout << -1 << endl;
    else
        cout << minimum << endl;

    return 0;
}