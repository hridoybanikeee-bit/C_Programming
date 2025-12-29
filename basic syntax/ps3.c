// Write a C program to check whether a number is divisible 
// by 5 and 11 or not.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a digit: \n");
    scanf("%d",&a);

    if (a % 5 == 0 && a % 11 == 0)
    {
        printf("%d is divisible by 5 and 11 both",a);
    }
    else
    {
        printf("%d is not diviable by 5 and 11 both",a);
    }
    return 0;
}