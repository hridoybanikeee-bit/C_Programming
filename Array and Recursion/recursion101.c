#include<stdio.h>
void count(int i)
{
    if(i == 11)
    {
        return;
    }
    printf("%d ",i);
    count(i+1);
}
int main()
{
    count(1);
    return 0;
}