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

        int pos = S.find(X);

        while (pos != -1)
        {
            S.replace(pos, X.size(), "#");
            pos = S.find(X);
        }

        cout << S << endl;
    }

    return 0;
}