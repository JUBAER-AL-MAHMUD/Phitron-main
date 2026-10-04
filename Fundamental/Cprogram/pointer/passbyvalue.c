#include<stdio.h>
void any(int a)
{
    a = 100;
        printf("main function address: %p\n",&a);
}

int main(int argc, char const *argv[])
{
    int a = 10;
    any(a);
    printf("a = %d\n", a);
    printf("main function address: %p\n",&a);
    return 0;
}
