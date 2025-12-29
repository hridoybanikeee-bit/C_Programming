#include<stdio.h>
void fun(int x)
{
    x = 20;
    printf("Fun Function x: %d\n",x);
}
int main()
{
    int x = 34;
    fun(x);
    printf("Main function x: %d",x);
    
    return 0;
}