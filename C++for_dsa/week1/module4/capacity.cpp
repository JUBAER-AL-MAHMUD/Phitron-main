#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin>>s;
    cout<<s[3]<<endl;
    string s1;
    cin>>s1;
    s.append(s1);
    s.push_back('a'); 
    cout<<s<<endl;
    return 0;
}