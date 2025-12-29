#include<stdio.h>
int main()
{
    int arr[5] = {10,3,43,55,33};
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[i] > arr[j])
            {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}