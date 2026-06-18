#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    string s;
    int id;

    Student(string name, string str, int id)
    {
        this->nm = name;
        this->s = str;
        this->id = id;
    }
};

int main()
{
    int N;
    cin >> N;
    string name, s ;
    int id;
    cin>> name >> s >> id;
    Student st(name, s, id);

    cout << st.nm << " " << st.s << " " << st.id << endl;

    return 0;
}