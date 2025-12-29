#include<stdio.h>
void prints(int i)
{
    if(i==0)
    {
        return;
    }
    printf("I love Recursion\n");
    prints(i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    prints(n);

    return 0;
}