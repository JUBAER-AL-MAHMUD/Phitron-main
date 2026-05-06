#include<stdio.h>
//function 
int sum(int sum1 , int sum2)
{
    int ans = sum1 + sum2;
    return ans;

}

int main ()
{
    int value = sum( 20 , 30 );
    printf("the sum is %d", value);
    return 0;
}