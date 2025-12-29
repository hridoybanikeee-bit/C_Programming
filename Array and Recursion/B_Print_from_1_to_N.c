#include<stdio.h>
void show(int n)
{
    int i=1;
    for(i = 1; i<=n; i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    show(n);
    return 0;
}