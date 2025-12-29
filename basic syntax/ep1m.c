//Write a C program that will take 2 numbers
// from the user and then print the 
//2nd number first and then first number

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("Second number: %d\n",b);
    printf("First number: %d",a);
    return 0;
}