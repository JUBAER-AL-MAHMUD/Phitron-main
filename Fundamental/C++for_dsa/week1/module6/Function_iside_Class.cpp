#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;
    int roll;
    int math;
    int physics;

    Student(string name, int age, int roll, int math, int physics)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
        this->math = math;
        this->physics = physics;
    }

    void totalMarks()
    {
        cout << "Total Marks : " << math + physics << endl;
    }
};
int main()
{
    Student karim("Karim", 20, 101, 85, 90);
    cout << "Name: " << karim.name << endl;
    karim.totalMarks();
    Student rahim("Rahim", 22, 102, 80, 88);
    cout << "Name: " << rahim.name << endl;
    rahim.totalMarks();
    return 0;
}