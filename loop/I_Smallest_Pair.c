#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 1; i<=t; i++)
    {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = __INT_MAX__;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] + arr[j] + j - i < min)
            {
                min = arr[i] + arr[j] + j - i ;
            }
            else
            {
                continue;
            }
        }
        
    }
    printf("%d\n",min);

    }

    return 0;
}