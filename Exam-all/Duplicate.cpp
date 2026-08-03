#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    vector <long long > A(n);
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    for (int i=0;i<n-1;i++)
    {
        if (A[i]==A[i+1])
        {
            cout<<A[i]<<" ";
        }
    }
    return 0;
}