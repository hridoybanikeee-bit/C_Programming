//Write a c program to print 8’s time table to 200
#include<stdio.h>
int main()
{
    int a = 8;
    int sum = 0;
    for(int i = 1;i<50;i++)
    {
        printf("%d X %d = %d\n", a,i,(a*i));
        if (a*i >= 200)
        {
            break;
        } 
    }
}