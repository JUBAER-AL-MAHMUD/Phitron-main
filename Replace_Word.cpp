#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S, X;
        cin >> S >> X;

        int rep = S.find(X);

        while (rep != -1)
        {
            S.replace(rep, X.size(), "#");
            rep = S.find(X);
        }

        cout << S << endl;
    }

    return 0;
}