#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[101];
    for(int i=0; i<n; i++)
    {
        scanf("%s",s);
        int leng = strlen(s);
        if(leng<=10)
        {
            printf("%s\n",s);
        }
        else
        {
            int new = leng-2;
            printf("%c%d%c\n",s[0],new,s[leng-1]);

        }
    }
    return 0;
}