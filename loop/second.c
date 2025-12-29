//Write a c program to 
//print all odd number from 100 to 1

#include<stdio.h>
int main()
{
    int i;
    for(i=100;i>=1;i = i - 1)
    {
        if(i%2 != 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}