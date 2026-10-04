#include <stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (i = 0; i < n; i++)
    {
        for (int k=1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf(" #");
        }

        printf("\n");
        star++;
        space--;
    }
}