#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char digit[n];
    scanf("%s",digit);
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        arr[i] = digit[i] - 48;
    }
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    printf("%d",sum);
    

    return 0;
}