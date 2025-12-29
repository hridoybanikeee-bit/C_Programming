#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int count = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = __INT_MAX__;
    for(int i=0; i<n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i] == min)
        {
            count++;
        }
    }
    if(count % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    
   

    return 0;
}