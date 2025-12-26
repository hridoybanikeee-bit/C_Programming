#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int is_pal = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(arr[i] != arr[j])
        {
            is_pal = 1;
        }
        i++;
        j--;
    }
    if (is_pal == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

   


    return 0;
}