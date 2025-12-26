//Take an array from input and
// print the minimum value of that array.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int min = 0;
    for(int i=0; i<n; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<n; j++)
    {
        if(arr[j] < min)
        {
            min = arr[j];
        }
    }
    printf("%d",min);
    return 0;
}