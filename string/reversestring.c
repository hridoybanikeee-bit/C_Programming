#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int len = strlen(s);
    int i =0;
    int j= len-1;
    int is_pal = 0;
    while(i<j)
    {
        if(s[i] != s[j])
        {
            is_pal = 1;
        }
        i++;
        j--;
       
        
    }
    if(is_pal == 0)
        {
            printf("YES");
        }
    else
        {
            printf("NO");
        }
    
    
    
    return 0;
}