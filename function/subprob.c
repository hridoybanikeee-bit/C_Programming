#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space = n-1;
    int dash =1;
    int hash =1;
    for(int i=1; i<=n; i++)
    {
        for(int i=1; i<=space; i++)
        {
            printf(" ");
        }
        
        
        for(i =1;i<=n;i++)
        {
            if(i % 2 != 0)
            {
                for(int i=1; i<= hash; i++)
                {
                    printf("#");
                }
                printf("\n");
                
            }
            else
            {
                for(int i=1; i<= dash; i++)
                {
                    printf("-");
                }
                printf("\n");
                
            }
            space--;
            hash = hash+2;
            dash = dash +2;
            break;
            
            
            
        }
        
        printf("\n");
        
        
    }
    return 0;
}