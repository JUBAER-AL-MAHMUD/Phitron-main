#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int groupsize[100005];

int findparent(int node)
{
    if (parent[node] == node)
    {
        return node;
    }

    parent[node] = findparent(parent[node]);
    return parent[node];
}

int main()
{
    int N, E;
    cin >> N >> E;

    for (int i = 1; i <= N; i++)
    {
        parent[i] = i;
        groupsize[i] = 1;
    }

    int count = 0;

    for (int i = 0; i < E; i++)
    {
        int A, B;
        cin >> A >> B;

        int leaderA = findparent(A);
        int leaderB = findparent(B);

        if (leaderA == leaderB)
        {
            count++;
        }
        else
        {            if (groupsize[leaderA] < groupsize[leaderB])
            {
                parent[leaderA] = leaderB;
                groupsize[leaderB] += groupsize[leaderA];
            }
            else
            {
                parent[leaderB] = leaderA;
                groupsize[leaderA] += groupsize[leaderB];
            }
        }
    }

    cout << count << endl;

    return 0;
}