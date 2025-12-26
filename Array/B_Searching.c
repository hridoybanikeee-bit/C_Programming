#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int ok = 0;
    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int inputs;
    scanf("%d",&inputs);
    for(int i=0; i<n; i++)
    {
        if(arr[i] == inputs)
        {
            printf("%d",i);
            ok += 1;
            break;
        }
        
    }
    if (ok == 0)
    {
        printf("-1");
    }
    return 0;
}