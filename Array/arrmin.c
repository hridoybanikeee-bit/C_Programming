#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,-1,4};
    int min = arr[0];
    int new_min = 0;
    int pos = 0;
    for(int i = 0; i<5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            new_min = min;
            
        }
        


    }
    
    for(int i = 0; i<5; i++)
    {
        if(arr[i] == new_min)
        {
            pos = i + 1;
        }
    }
    printf("%d %d", min, pos);
    return 0;
}