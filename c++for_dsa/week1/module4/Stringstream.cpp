#include <bits/stdc++.h>
using namespace std;
int main() 
{   string s ;
    cin>> s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    ss>> word;
    cout<< word << endl;
    ss>> word;
    cout<< word << endl;
    return 0;
}