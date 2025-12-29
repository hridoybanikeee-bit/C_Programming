#include<stdio.h>
#include<limits.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr[i]);
    }
    int res = INT_MAX;
    for(int i=0; i<m; i++)
    {
        for(int j=i+1; j<m; j++)
        {
            int val = arr[i] + arr[j] + (j+1) - (i+1);
            // printf("%d\n",val);
            if(val<res)
            {
                res = val;
            }
        }
    }
    printf("%d",res);

    return 0;
}