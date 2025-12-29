#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space = 0 ;
    int star = n;
    for(int i=1;i<=n;i++)
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
        star--;
        space++;

    }
    return 0;
}