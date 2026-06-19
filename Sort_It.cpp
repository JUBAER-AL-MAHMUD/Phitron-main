#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    int total_marksA = a.math_marks + a.eng_marks;
    int total_marksB = b.math_marks + b.eng_marks;

    if (total_marksA > total_marksB)
    {
        return true;
    }
    else if (total_marksA < total_marksB)
    {
        return false;
    }
    else
    {
        return a.id < b.id;
    }
}

int main()
{
    int N;
    cin >> N;

    Student arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr, arr + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i].nm << " "
             << arr[i].cls << " "
             << arr[i].s << " "
             << arr[i].id << " "
             << arr[i].math_marks << " "
             << arr[i].eng_marks << endl;
    }

    return 0;
}