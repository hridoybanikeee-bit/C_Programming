#include<stdio.h>
void looping(int x)
{
    int i=1;
    while(i<=x)
    {
        printf("%d",i);
        if(i==x)
        {
            break;
        }
        printf(" ");
        i++;
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    looping(n);
    
    return 0;
}