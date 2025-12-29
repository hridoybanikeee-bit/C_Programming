#include<stdio.h>
void minmax(int arr[],int n)
{
    int min = __INT_MAX__;
    int max = 0;
    for(int i=0; i<n; i++ )
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }

    }
    for(int i=0; i<n; i++ )
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

    }
    printf("%d %d",min,max);


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
    minmax(arr,n);
    return 0;
}