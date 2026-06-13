#include <bits/stdc++.h>
using namespace std;
int main() 
{
   string s = "hello";
    s.clear();
    if(s.empty())
    {
        cout<<"string is empty";
    }
    else
    {
        cout<<"string is not empty";
    }
    cout<<s.size();
    return 0;
}