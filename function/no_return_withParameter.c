#include<stdio.h>
void sum(int a, int b)
{
    int res = a+b;
    printf("%d",res);
    
}
int main()
{
    int x, y;
    scanf("%d %d",&x,&y);
    sum(x,y);
    
    return 0;
}