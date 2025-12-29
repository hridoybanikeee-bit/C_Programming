#include<stdio.h>
void sum(int arr[],int n,int idx,long long int sums)
{
    if(idx == n)
    {
        printf("%lld",sums);
        return;
    }
    else
    {
        sums += arr[idx];
    }
    
    sum(arr,n,idx+1,sums);
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int sums = 0;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sum(arr,n,0,sums);
    return 0;
}