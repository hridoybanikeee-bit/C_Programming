#include<stdio.h>
int swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("%d\n%d",a,b);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap(x,y);
    return 0;
}