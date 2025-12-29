//Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: \n");
    scanf("%c",&c);

    if (c >= 'a' && c<='b' || c >= 'A' && c<= 'Z')
    {
        printf("%c is a character",c);
    }
    else
    {
        printf("%c is not a character",c);
        
    }
    return 0;
}