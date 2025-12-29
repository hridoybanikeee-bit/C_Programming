#include<stdio.h>
int main()
{
    char s[5] = "12845";
    int arr[5];
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        arr[i] = s[i] - 48;
    }
    for(int i=0; i<5; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}