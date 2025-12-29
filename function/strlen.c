#include<stdio.h>
int length(char *s)
{
    int count = 0;
    for(int i =0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char s[101];
    scanf("%s",s);
    printf("%d",length(s));
    return 0;
}