#include <bits/stdc++.h>
using namespace std;

int  fac (int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    else 
    {
        return n * fac(n - 1);
    }
}
int main() 
{
    int N;
    cin >> N;

    cout << fac(N) << endl;
    return 0;
}