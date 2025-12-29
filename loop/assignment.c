// You will be given a non-negative integer N, 
// you need to print all numbers from 1 to N that are divisible by both 3 and 7.
#include<stdio.h>
int main()
{
    int money;
    scanf("%d",&money);
    if(money>1000)
    {
        printf("I will buy Punjabi\n");
        int reduced = money - 1000;
        if (reduced >= 500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}
