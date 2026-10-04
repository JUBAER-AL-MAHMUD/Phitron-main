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
Student createStudent()
{
    Student s(10, 5, 3.75);
    return s;
} 
int main() 
{
    Student Rahim = createStudent();   
    cout << Rahim.cls << " " << Rahim.roll << " " << Rahim.GPA << endl;
    return 0;
}