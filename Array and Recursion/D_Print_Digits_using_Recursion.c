#include<stdio.h>
void count(int digit)
{
    if(digit == 0)
    {
        return;
    }
    
    int last = digit % 10;
    digit = digit /10;
    count(digit);
    printf("%d ",last);   
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int digit;
        scanf("%d",&digit);
        if(digit == 0)
        {
            printf("0");
        }
        count(digit);
        printf("\n");
    }
    
    return 0;
}