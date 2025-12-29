// Write a C program to input 
// month number and print number of days in that month.

//1,3,5,7,8,10,12 - 31
//4,6,9,11 - 30
//2 er jonno in general 28

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of the month,starting from January (1) to December(12): \n");
    scanf("%d",&num);

    if( num == 1 || num == 3 || num==5 || num==7 ||num == 8 || num == 10 || num==12)
    {
        printf("Month consist of 31 days");
    }
    else if( num == 4 || num == 6 || num==9 || num==11)
    {
        printf("Month consist of 30 days");
    }
    else if(num ==2)
    {
        printf("Month consist of 28 days");
    }
    else
    {
        printf("You have entered wrong input");
    }
    return 0;

}