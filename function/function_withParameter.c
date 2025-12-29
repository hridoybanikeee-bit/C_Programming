#include<stdio.h>
int sum(int a, int b)
{
    int res = a+b;
    return res;
}
int main()
{
    int x, y;
    scanf("%d %d",&x,&y);
    printf("%d",sum(x,y));
    
    return 0;
}