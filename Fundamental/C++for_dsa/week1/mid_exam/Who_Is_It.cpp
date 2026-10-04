#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID;
    string Name;
    char Section;
    int TotalMarks;
};

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        Student a, b, c;

        cin >> a.ID >> a.Name >> a.Section >> a.TotalMarks;
        cin >> b.ID >> b.Name >> b.Section >> b.TotalMarks;
        cin >> c.ID >> c.Name >> c.Section >> c.TotalMarks;

        Student ans = a;

        if (b.TotalMarks > ans.TotalMarks ||
            (b.TotalMarks == ans.TotalMarks && b.ID < ans.ID))
        {
            ans = b;
        }

        if (c.TotalMarks > ans.TotalMarks ||
            (c.TotalMarks == ans.TotalMarks && c.ID < ans.ID))
        {
            ans = c;
        }

        cout << ans.ID << " " << ans.Name << " " << ans.Section << " " << ans.TotalMarks << endl;
    }

    return 0;
}