#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int flag=0;
    int zero = 0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    if(r==c)
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if( (i+j) == (r-1))
                {
                    continue;
                }
                else
                {
                    if( arr[i][j] != 0)
                    {
                        flag += 1;
                        
                    }
                }
            }
        }
        if(flag == 0)
        {
            printf("Secondary Diagonal Matrix");
        }
        else
        {
            printf("Not a diagonal matrix");
        }
    }
    else
    {
        printf("Not even a square matrix\nSo, it can't be a diagonal matrix");
    }
    return 0;
}