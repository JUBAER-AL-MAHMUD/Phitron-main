#include<stdio.h>
//function 
int sum()
{
    int a , b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    return ans;

}

int main ()
{
    int value = sum();
    printf("the sum is %d", value);
    return 0;
}