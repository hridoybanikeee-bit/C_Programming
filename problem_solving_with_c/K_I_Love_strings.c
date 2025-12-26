#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
    
    char s[51],t[51];
    scanf("%s %s", s,t);
    int a = strlen(s);
    int b = strlen(t);
    // printf("%d\n%d\n",a,b);
    
    // printf("%s\n",s);
    // printf("%s",t);
    if(a==b)
    {
        for(int i=0;i<a;i++)
        {
            printf("%c%c",s[i],t[i]);
        }
        printf("\n");
    }
    else if(a>b)
    {
        int len = b;
        int extra = a - b;
        for(int i=0; i<len; i++)
        {
            printf("%c%c",s[i],t[i]);
        }
        for(int i=len; i<(len + extra);i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");
    }
    else
    {
        int len = a;
        int extra = b - a;
        for(int i=0; i<len; i++)
        {
            printf("%c%c",s[i],t[i]);
        }
        for(int i=len; i<(len + extra);i++)
        {
            printf("%c",t[i]);
        }
        printf("\n");
    }

    }

    
    
    return 0;
}