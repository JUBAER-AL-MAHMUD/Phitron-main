#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string S, X;
        cin >> S >> X;

        int A = S.find(X);

        while (A != -1)
        {
            S.replace(A, X.size(), "#");
            A = S.find(X);
        }

        cout << S << endl;
    }

    return 0;
}