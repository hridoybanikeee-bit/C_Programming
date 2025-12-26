#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    int one = 1; //if all targeted entity is 1
    int zero = 0; //if all non targeted entity is 0
    if(r==c)
    {
        // printf("Square Matrix\n"); //checking whether its square matrix or not
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                scanf("%d",&a[i][j]);
            }
        } // input processing

      //if all primary diagonals are non zero


         for(int i=0; i<r; i++) // if all targeted elements are 1
        {
            for(int j=0; j<c; j++)
            {
                if((i+j == r-1) || (i == j))
                {
                    if(a[i][j] != 1)
                    {
                        one = 0; //if any of the secondary diagonal entity is non zero
                        

                    }
                }

                 if((i+j != r-1) && (i != j))
                {
                    if(a[i][j] != 0)
                    {
                        zero = 1; //if any of the secondary diagonal entity is non zero
                        

                    }
                    

                }
            }
        } //if al

        if(one == 1 && zero == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }

    }
    else
    {
        printf("NO");
    }
    return 0;
}