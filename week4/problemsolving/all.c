#include<stdio.h>
void recursive(int n)
{ 
if(n==0)
{
    return;
}
int last = n%10;
printf("%d ",last);
recursive(n/10);
}
int main()
{   int t;
     scanf("%d",&t);
     for (int i = 0; i < t; i++)
     {
       int n ;
    
    scanf("%d",&n);
    recursive(n);
    printf("\n");

     }
     return 0;

    
}