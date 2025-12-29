#include<stdio.h>
#include<string.h>
int main()
{
    
    char a[11];
    char b[11];
    scanf("%s",a);
    scanf("%s",b);
    int n = strlen(a);
    int m = strlen(b);
    printf("%d %d\n",n,m);
    char c[n+m];
    for(int i=0; i<n; i++)
    {
        c[i] = a[i];
    }
    for(int i=0; i<m; i++)
    {
        c[n+i] = b[i];
    }
    c[n + m] = '\0';
    printf("%s\n",c);
    char tmp = a[0];
    a[0] = b[0];
    printf("%s ",a);
    b[0] = tmp;
    printf("%s",b);
    return 0;
}