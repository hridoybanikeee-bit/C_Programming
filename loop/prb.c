#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space = n-1;
    int sym = 1;
    int rev_sym = 2*(n-1) -1;
    
    int rev_space = 1;
    for(int i=1; i<=n; i++)
    {
        
        // int sym = 2*i + 1;
        for(int s=1; s<=space; s++)
        {
            printf(" ");
        }
        
        if(i%2 != 0)
            {
                for(int i=1; i<=sym; i++)
                {
                    printf("#");
                }   
            }
        else
            {
                for(int i=1; i<= sym; i++)
                {
                    printf("-");
                }
                
                
            }
            printf("\n");
            space = space - 1;   
            sym = sym + 2;
    }
    for(int i=n-1; i>= 1; i--) //reverse line
    {
        for(int i=1; i<= rev_space;i++)
        {
            printf(" ");
        }
        if(i%2 != 0)
            {
                for(int i=1; i<=rev_sym; i++)
                {
                    printf("#");
                }   
            }
        else
            {
                for(int i=1; i<= rev_sym; i++)
                {
                    printf("-");
                }
                
                
            }
        printf("\n");
        
        rev_space++;
        rev_sym = rev_sym - 2;
    }
    return 0;
}