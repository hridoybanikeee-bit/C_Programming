#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int arr2[n];
        for(int k=0; k<n; k++)
        {
            scanf("%d",&arr[k]);
        }
        for(int k=0; k<n; k++)
        {
            arr2[k] = arr[k];
        } //copied

       

        for(int p=0; p<n; p++)
        {
            for(int q=p+1; q<n; q++)
            {
                if(arr2[p]>arr2[q])
                {
                    int tmp;
                    tmp = arr2[p];
                    arr2[p] = arr2[q];
                    arr2[q] = tmp;
                }
            }
        }

        for(int m=0; m<n; m++)
        {
            printf("%d ",abs(arr[m] - arr2[m]));
        }
        printf("\n");

        


    }
    return 0;
}