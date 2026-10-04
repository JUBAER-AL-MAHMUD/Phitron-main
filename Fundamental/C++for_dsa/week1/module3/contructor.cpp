#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double GPA;
    Student(int c , int r, double g)
    {
        cls = c;
        roll = r;
        GPA = g;
    }
};
int main() 
{
    Student Rahim(10, 5, 3.75);
    Student Karim(10, 6, 3.85);
    Student Babor(10, 7, 3.65);
    cout << Rahim.cls << " " << Rahim.roll << " " << Rahim.GPA << endl;
    cout << Karim.cls << " " << Karim.roll << " " << Karim.GPA << endl;
    cout << Babor.cls << " " << Babor.roll << " " << Babor.GPA << endl;

    return 0;
}