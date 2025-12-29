#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int flag= 0;
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
                if(arr[i][j] != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Not a zero matrix");
    }
    }
    else
    {

        printf("Not a square matrix\nhence no question of zero matrix");
    }
    
  
}