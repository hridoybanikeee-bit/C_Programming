#include<stdio.h>
int main()
{
    char a[30];
    fgets(a,20,stdin);
    printf("%s\n",a);
    int count = 0;
    for (int i=0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}