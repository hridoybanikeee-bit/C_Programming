// Write a C program to input any character and check 
// whether it is alphabet, digit or special character.

#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: \n");
    scanf("%c",&c);

    if (c>= 'a' && c<= 'z' || c>= 'A' && c<= 'Z')
    {
        printf("%c is a character",c);
    }

    else if (c>= '0' && c<= '9')
    {
        printf("%c is a digit",c);
    }

    else
    {
        printf("%c is a speacial character",c);
    }
    return 0;
}