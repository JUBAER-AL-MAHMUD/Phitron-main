#include <bits/stdc++.h>
using namespace std;

long long dis[105][105];

int main()
{
    int N, E;
    cin >> N >> E;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == j)
            {
                dis[i][j] = 0;
            }
            else
            {
                dis[i][j] = -1;
            }
        }
    }

    for (int i = 0; i < E; i++)
    {
        int A, B;
        long long W;

        cin >> A >> B >> W;

        if (dis[A][B] == -1 || W < dis[A][B])
        {
            dis[A][B] = W;
        }
    }

    for (int K = 1; K <= N; K++)
    {
        for (int I = 1; I <= N; I++)
        {
            for (int J = 1; J <= N; J++)
            {
                if (dis[I][K] != -1 && dis[K][J] != -1)
                {
                    long long newCost = dis[I][K] + dis[K][J];

                    if (dis[I][J] == -1 || newCost < dis[I][J])
                    {
                        dis[I][J] = newCost;
                    }
                }
            }
        }
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, Y;
        cin >> X >> Y;

        cout << dis[X][Y] << endl;
    }

    return 0;
}