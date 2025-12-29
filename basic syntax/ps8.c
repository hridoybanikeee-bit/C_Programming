// Write a C program to check whether 
// a character is uppercase or lowercase alphabet.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: \n");
    scanf("%c",&ch);

    if(ch>= 'A' && ch<= 'Z')
    {
        printf("%c is an uppercase letter",ch);
    }
    else if(ch>= 'a' && ch<= 'z')
    {
        printf("%c is a lowecase letter",ch);
    }
    else
    {
        printf("perhaps u provided a wrong input, please check");
    }
    return 0;
}