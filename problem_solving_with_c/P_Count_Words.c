#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    fgets(s,1000001,stdin);
    int space = 1;
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i] == 32)
        {
            space += 1;
        }
    }
    printf("%d",space);
    return 0;
}