#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    stack<int> A;
    queue<int> B;

    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        A.push(val);
    }

    for (int i = 0; i < M; i++)
    {
        int val;
        cin >> val;
        B.push(val);
    }

    if (N != M)
    {
        cout << "NO";
        return 0;
    }

    while (!A.empty())
    {
        if (A.top() != B.front())
        {
            cout << "NO";
            return 0;
        }

        A.pop();
        B.pop();
    }

    cout << "YES";

    return 0;
}