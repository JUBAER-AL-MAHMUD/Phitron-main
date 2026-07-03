#include <bits/stdc++.h>
using namespace std;
void fun(int* &p) 
{
    int x = 20;
    cout << "Value of x inside fun: " << &p << endl; // prints 20
}
int main() 
{
    int x = 10;
    int *p = &x; // pointer p holds the address of x
     fun(p);
     cout << "Value of x in main: " << &p << endl; // prints 10
    return 0;
}