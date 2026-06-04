#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double GPA;
    Student(int cls , int roll, double GPA)
    {
        this->cls = cls;
        this->roll = roll;
        this->GPA = GPA;
    }
};

int main() 
{
    Student rahim(10, 5, 3.75);
    Student *karim = new Student(10, 6, 3.85);
    cout << rahim.cls << " " << rahim.roll << " " << rahim.GPA << endl;
    cout << karim->cls << " " << karim->roll << " " << karim->GPA << endl;
    delete karim;
    return 0;
}