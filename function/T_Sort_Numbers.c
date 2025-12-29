#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int arr[3] = {a,b,c};
    int arr1[3] = {a,b,c};
    for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(arr[i] > arr[j])
            {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    for(int i=0; i<3; i++)
    {
        printf("%d\n",arr1[i]);
    }
    return 0;
}