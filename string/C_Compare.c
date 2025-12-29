#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];
    char b[21];
    scanf("%s %s",&a,&b);
    if (strcmp(a, b) == 0)  // If strings are equal
    {
        printf("%s", a);  // Either of the strings can be printed
    }
    else
    {
        for(int i = 0; i<21; i++)
    {
        if(a[i]<b[i])
        {
            printf("%s",a);
            break;
        }
        else if(b[i] < a[i])
        {
            printf("%s",b);
            break;
        }
        else
        {
            continue;
        }
    }

    }
    
    return 0;
}