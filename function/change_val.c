#include<stdio.h>
void cng_val(int arr[],int n)
{
    arr[n-1] = 100;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    cng_val(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}