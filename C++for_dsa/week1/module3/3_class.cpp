#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double GPA;
};
int main() 
{
    Student a, b;
    cin.getline(a.name, 100);
     cin >>  a.roll >> a.GPA;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >>  b.roll >> b.GPA;
        cout << a.name << " " << a.roll << " " << a.GPA << endl;
        cout << b.name << " " << b.roll << " " << b.GPA << endl;
    return 0;
}