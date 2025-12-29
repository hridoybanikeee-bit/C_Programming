#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int prim_diag = 0;
    int secon_diag = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                prim_diag += arr[i][j];
            }
        }
    }

     for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j == n-1)
            {
                secon_diag += arr[i][j];
            }
        }
    }

    int outcome = abs(prim_diag - secon_diag);
    printf("%d",outcome);


    return 0;
}