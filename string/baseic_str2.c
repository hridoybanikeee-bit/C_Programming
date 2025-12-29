#include<stdio.h>
int main()
{
    char s[70] = "Hridoy Banik Akash";
    // s[7] = "Hridoy";
    int count = 0;
    printf("%s\n",s);
    for(int i = 0; s[i] != '\0'; i++)
    {
        count+= 1;
    }
    printf("%d",count);
    return 0;
}