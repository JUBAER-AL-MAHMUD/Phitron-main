#include <iostream>
using namespace std;

class ArrSum
{
public:
    void Check()
    {
        int N, S;
        cin >> N >> S;

        int A[105];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool found = false;

        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        found = true;
                    }
                }
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
};

int main()
{
    int T;
    cin >> T;

    ArrSum obj;

    for (int i = 0; i < T; i++)
    {
        obj.Check();
    }

    return 0;
}