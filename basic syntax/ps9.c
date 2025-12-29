//Write a C program to input week number and print week day

#include<stdio.h>
int main()
{
    int a;
    printf("Enter week number: \n");
    scanf("%d",&a);

    if (a==1)
    {
        printf("Saturday");
    }
    else if(a==2)
    {
        printf("Sunday");
    }
    else if(a==3)
    {
        printf("Monday");
    }
    else if(a==4)
    {
        printf("Tuesday");
    }
    else if(a==5)
    {
        printf("Wednesday");
    }
    else if(a==6)
    {
        printf("Thursday");
    }
    else if(a==7)
    {
        printf("Friday");
    }
    else
    {
        printf("You have entered wrong input.");
    }
    return 0;

}