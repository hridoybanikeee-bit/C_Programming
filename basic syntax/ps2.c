// Write a C program to find maximum 
// between three numbers.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three digits: \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("%d is greater among all",a);
    }

    else if(b>a && b>c)
    {
        printf("%d is greater among all",b);
    }

    else
    {
        printf("%d is greater among all",c);
    }
    return 0;
}