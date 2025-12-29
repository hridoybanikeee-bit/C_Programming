#include<stdio.h>
#include<string.h>
void vowel(char s[],int n,int idx,int count)
{
    if(idx == n)
    {
        printf("%d",count);
        return;
    }
    if( s[idx] == 'a' || s[idx] == 'e' || s[idx] == 'i' || s[idx] == 'o' || s[idx] == 'u' || s[idx] == 'A' || s[idx] == 'E' || s[idx] == 'I' || s[idx] == 'O' || s[idx] == 'U')
    {
        count++;
    }
    vowel(s,n,idx+1,count);
}
int main()
{
    char s[201];
    fgets(s,201,stdin);
    int count = 0;
    int length = strlen(s);
    vowel(s,length,0,count);
    return 0;
}