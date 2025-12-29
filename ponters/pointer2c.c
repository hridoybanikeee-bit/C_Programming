#include<stdio.h>
int main()
{
    int x = 15;
    printf("%d\n",x);
    int* ptr = &x;
    printf("%p",ptr);
    return 0;
}