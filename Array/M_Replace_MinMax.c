#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int min_val =0, max_val=0;
   
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for(int i=0;i<n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            min_val = i;
        }
    }
    
    for(int i=0;i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            max_val =i;
        }
    }
    // printf("%d\n",min_val);
    // printf("%d\n",max_val);
    int tmp;
    tmp = arr[min_val];
    arr[min_val] = arr[max_val];
    arr[max_val] = tmp;

    //printf("%d %d",arr[2],arr[4]);

    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}