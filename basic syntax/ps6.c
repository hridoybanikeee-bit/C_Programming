// Write a C program to input any alphabet and
//  check whether it is vowel or consonant.

#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character: \n");
    scanf("%c",&a);

    if (a == 'a' || a == 'e' || a=='i' || a=='o' || a=='u' || a=='A' || a =='E' || a=='I' || a == 
    'O' || a=='U')
    {
        printf("%c is a vowel",a);
    }
    else
    {
        printf("%c is a consonant",a);
    }
    return 0;
}