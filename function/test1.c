#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space = n-1;
    int hash = 1;
    int dash = 3;
    for(int i=1; i<=n; i++) //for lines
    {
        for(int i=1; i<= space; i++)
        {
            printf(" ");
        }
        space--;
        for(int j=1; j<=n; j++)
        {
            if(j%2 != 0)
            {
                for(int i=1; i<=hash; i++)
                {
                    printf("#");
                }
                printf("\n");
                hash=hash+2;
            }
            
            else
            {
                for(int i=1;i<=dash;i++)
                {
                    printf("-");
                }
                printf("\n");
                dash = dash +2;
            }
            
        }
        printf("\n");
        i++;
    }
    return 0;
}