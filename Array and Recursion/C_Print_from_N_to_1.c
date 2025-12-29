#include<stdio.h>
void digit(int i)
{
    if(i==0)
    {
        return;
    }
    
    printf("%d",i);
    if(i>=2)
    {
        printf(" ");
    }
    digit(i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    digit(n);
    return 0;
}