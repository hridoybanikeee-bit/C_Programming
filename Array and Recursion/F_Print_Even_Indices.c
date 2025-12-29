#include<stdio.h>
void arrays(int arr[],int idx)
{
    if(idx == -1)
    {
        return;
    }
    if(idx % 2 == 0)
    {
        printf("%d ",arr[idx]);
    }
    arrays(arr,idx-1);
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
    arrays(arr,n-1);
    return 0;
}