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

    _Bool flag = 100;

    if (r == c) // square matrix
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j == r - 1)
                {
                    //we are on the diagonal
                }
                else
                {
                    // outside the diagonal
                    if (arr[i][j] != 0)
                    {
                        flag = 200;
                        printf("this is not a diagonal matrix");
                    }
                }
            }
        }
        if (flag == 200)
        {
            printf("this is a diagonal matrix");
        }
    }
    
    else
    {
        printf("this is not a diagonal matrix");
    }

    return 0;
}