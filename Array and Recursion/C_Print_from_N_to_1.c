#include<stdio.h>
void show(int n)
{
    for(int i=n; i>=1; i--)
    {
        printf("%d",i);
        if(i>1)
        {
            printf(" ");
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    show(n);
    return 0;
}