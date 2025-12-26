#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    // printf("%s",s);
    int sum=0;
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
        
        int p = s[i] - 48;
        sum += p;
    }
    // printf("%d",sum);
    if(sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}