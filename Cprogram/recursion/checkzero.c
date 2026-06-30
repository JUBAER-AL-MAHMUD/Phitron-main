#include <stdio.h>
int main()
{
    int c, r;

    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int val = r * c;
    int zero = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 0)
            {
                zero++;
            }
        }
    }
    if (zero == val)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}