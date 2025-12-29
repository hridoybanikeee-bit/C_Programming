#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int c = strlen(a);
    int d = strlen(b);
    for(int i=0; i<=d; i++)
    {
        a[c+i] = b[i];
    }
    printf("%s",a);
    return 0;
}