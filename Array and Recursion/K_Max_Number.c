#include<stdio.h>
void maximum(int arr[],int idx,int n,int max)
{
    if(idx==n)
    {
        printf("%d",max);
        return;
    }
    if(arr[idx] > max)
    {
        max = arr[idx];      
    }
    maximum(arr,idx+1,n,max);

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
    int max = arr[0];
    maximum(arr,0,n,max);

    return 0;
}