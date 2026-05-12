#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x=10;
    int* p =&x;
    printf("%p",&x);
    return 0;
}
