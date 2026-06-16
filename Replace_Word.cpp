#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    string S,X;
    for (int i = 0; i < T; i++)
    {
      
      cin >> S >> X;
    }
    
    int A = S.find(X);
    while (A != -1)
    {
        SS.replace(A, x.size(), "#");
        A = S.find(X);
    }
    cout << S << endl;

    return 0;
}