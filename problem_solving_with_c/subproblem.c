#include<stdio.h>
int main()
{
    int arr[5]={4,2,1,3,5};
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[i] > arr[j])
            {
                int tmp;
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
            
        }
    }
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}