#include<stdio.h>
int add(int x,int y)
{
    int res = x+y;
    return res;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",add(a,b));
    
    return 0;
}