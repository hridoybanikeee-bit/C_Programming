//Take an array from input and count how many 
//odd numbers are present in that array.


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<n; j++)
    {
        if(arr[j] % 2 != 0)
        {
            sum += 1;
        }
    }
    printf("%d",sum);
    return 0;
}