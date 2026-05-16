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

    int flag = 100;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {

                }
                else
                {
                    // outside the diagonal
                    if (arr[i][j] != 0)
                    {
                        flag = 200;
                    }
                }
            }
        }
    }
    else
    {
        flag = 200;
    }

    if (flag == 100)
    {
        printf("this is a diagonal matrix");
    }
    else
    {
        printf("this is not a diagonal matrix");
    }

    return 0;
}