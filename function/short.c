#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space = n-1;
    int star = 1;
    for(int i=1; i<=n; i++)
    {
        for(int i=1; i<= space; i++)
        {
            printf(" ");
        }
        for(int i=1; i<=star; i++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star = star +2;
    }
    return 0;
}