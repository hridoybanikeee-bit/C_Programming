#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    int flag = 0;//if the number is not found
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(x == arr[i][j])
            {
                flag += 1; // if the number is found
                
            }
        }
    }
    //printf("%d\n",flag);
    if(flag == 0)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}