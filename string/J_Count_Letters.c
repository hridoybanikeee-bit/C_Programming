#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000001];
    scanf("%s",s);
    int len = strlen(s);
    int fre[27] = {0};
    for(int i=0;i<len;i++)
    {
        //printf("%d\n",s[i]-96);
        int val = s[i] - 96;
        // printf("%d\n",val);
        fre[val]++;
    }
    for(int i=1; i<= 26; i++)
    {
        if(fre[i] != 0)
        {
            printf("%c : %d\n",i+96,fre[i]);
        }
        
    }

    return 0;
}