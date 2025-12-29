#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = __INT_MAX__;
    int fre[10] = {0};
    for(int i=0; i<n; i++)
    {
        int val = arr[i];
        fre[val]++;
    }
    for(int i=0; i<10; i++)
    {
        
        if(fre[i] != 0)
        {
            if (fre[i] < min)
            {
                min = fre[i];
            }
        }
        
    }
    printf("%d",min);

    return 0;
}