#include<stdio.h>
void count(int i)
{
    if(i == 0)
    {
        return;
    }
    printf("%d ",i);
    count(i-1);
}
int main()
{
    count(10);
    return 0;
}