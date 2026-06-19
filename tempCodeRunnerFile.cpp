#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin, S);
    stringstream ss(S);
    string name;
    while (ss >> name)
    {
        if (name == "Jessica")
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}