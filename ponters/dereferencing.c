#include<stdio.h>
int main()
{
    int x=10;
    printf("%d\n",x);
    int* ptr = &x;
    *ptr = 34;
    printf("%d\n",x);
    return 0;
}