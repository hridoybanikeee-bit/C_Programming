#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    int flag = 0; //if all non primary diagonal are 0 
    if(r==c)
    {
        printf("Square Matrix\n"); //checking whether its square matrix or not
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                scanf("%d",&a[i][j]);
            }
        } // input processing

      //if all primary diagonals are non zero


         for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(i+j != r-1)
                {
                    if(a[i][j] != 0)
                    {
                        flag = 1; //if any of the secondary diagonal entity is non zero
                        break;

                    }
                    

                }
            }
        } //if al

        if(flag == 0)
        {
            printf("secondary diagonal Matrix");
        }
        else
        {
            printf("Not a secondary diagonal matrix");
        }

    }
    else
    {
        printf("Not a square matrix\nso no chance of primary diagonal");
    }
    return 0;
}