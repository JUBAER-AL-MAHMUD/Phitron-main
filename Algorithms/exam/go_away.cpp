#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int A, B;
    long long W;
};

Edge edge_list[100005];

long long num = 1e18;
long long dis[1005];

int main()
{
    int N, E;
    cin >> N >> E;

    for (int i = 0; i < E; i++)
    {
        cin >> edge_list[i].A >> edge_list[i].B >> edge_list[i].W;
    }

    int S;
    cin >> S;

    for (int i = 1; i <= N; i++)
    {
        dis[i] = num;
    }

    dis[S] = 0;

    for (int i = 1; i <= N - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int A = edge_list[j].A;
            int B = edge_list[j].B;
            long long W = edge_list[j].W;

            if (dis[A] != num && dis[A] + W < dis[B])
            {
                dis[B] = dis[A] + W;
            }
        }
    }

    bool negativeCycle = false;

    for (int i = 0; i < E; i++)
    {
        int A = edge_list[i].A;
        int B = edge_list[i].B;
        long long W = edge_list[i].W;

        if (dis[A] != num && dis[A] + W < dis[B])
        {
            negativeCycle = true;
            break;
        }
    }

    int T;
    cin >> T;

    if (negativeCycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        while (T--)
        {
            int D;
            cin >> D;

            if (dis[D] == num)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[D] << endl;
            }
        }
    }

    return 0;
}