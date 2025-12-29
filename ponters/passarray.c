#include<stdio.h>
int retarr(int *a[])
{
    int n = sizeof(a);
    for(int i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
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
    retarr(arr[],n);
    return 0;
}