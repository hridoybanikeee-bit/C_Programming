#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int base = 6;
    int extra = (n-1)/2;
    int line = base + extra;
    int space = line-1;
    int star = 1;
    for(int i=0; i<line; i++) //for lines
    {
        for(int j = 1; j<=space; j++)//for space
        {
            printf(" ");
        }
        for(int i=1;i <= star; i++) //for star
        {
            printf("*");
        }
        star = star + 2;
        space--;
        printf("\n");

    }
    for(int i=1; i<=5; i++)
    {
        for(int i=1; i<=5; i++)
        {
            printf(" ");
        }
        for(int i=1; i<=n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}