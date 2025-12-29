//Take a number from user and check if its a 
//positive or negative number.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a digit: \n");
    scanf("%d",&a);
    if ( a == 0)
    {
        printf("%d is zero",a);
    }
    else if (a>0)
    {
        printf("%d is a positive number",a);
    }
    else 
    {
        printf("%d is a negative number",a);
    }
    return 0;

}