#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;

    for (; getline(cin, S); )
    {
        sort(S.begin(), S.end());

        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] != ' ')
            {
                cout << S[i];
            }
        }

        cout << endl;
    }

    return 0;
}