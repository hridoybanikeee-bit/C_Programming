#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space = n - 1;
    int star = 1;
    for(int i=1; i<=n; i++) // for lines
    {
        for(int j = 1; j<=space; j++) // for spaces
        {
            printf(" ");
        }
        for(int j=1; j<= star; j++) // for stars
        {
            printf("*");
        }
        printf("\n");
        space--;
        star = star + 2;
    }
    return 0;
}