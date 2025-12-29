#include<stdio.h>
void gello()
{
    printf("Gello\n");
}
void hello()
{
    printf("Hello\n");
    gello();
}
int main()
{
    printf("call stack\n");
    hello();
    return 0;
}