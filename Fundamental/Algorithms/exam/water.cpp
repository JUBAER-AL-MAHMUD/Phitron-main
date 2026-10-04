#include <bits/stdc++.h>
using namespace std;

int H[100005];

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        for (int i = 0; i < N; i++)
        {
            cin >> H[i];
        }

        int first = 0;
        int second= 1;

        if (H[0] < H[1])
        {
            first = 1;
            second = 0;
        }

        for (int i = 2; i < N; i++)
        {
            if (H[i] > H[first])
            {
                second = first;
                first = i;
            }
            else if (H[i] > H[second])
            {
                second = i;
            }
        }

        if (first < second)
        {
            cout << first << " " << second << endl;
        }
        else
        {
            cout << second << " " << first << endl;
        }
    }

    return 0;
}