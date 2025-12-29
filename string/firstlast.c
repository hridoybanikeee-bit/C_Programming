#include<stdio.h>
#include<string.h>
int main()
{
    
    char s[10] = "Hridoy";
    printf("%c\n",s[1]);
    int leng = strlen(s);
    printf("%c",s[leng-1]);
    return 0;
}