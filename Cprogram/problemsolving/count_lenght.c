#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int k = 0; k < T; k++)
    {
        int N;
        scanf("%d", &N);
        int A[N], B[N];
        for(int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }
        for(int i = 0; i < N; i++)
        {
            for(int j = i + 1; j < N; j++)
            {
                if(B[i] > B[j])
                {
                    int swap = B[i];
                    B[i] = B[j];
                    B[j] = swap;
                }
            }
        }
        for(int i = 0; i < N; i++)
        {
            if(A[i] > B[i])
            {
                printf("%d ", A[i] - B[i]);
            }
            else
            {
                printf("%d ", B[i] - A[i]);
            }
        }

        printf("\n");
    }

    return 0;
}