#include<stdio.h>
int main()
{
    char s[5]= "aabc";
    int fre[26] = {0};
    for(int i=0;i<4;i++)
    {
        //printf("%d\n",s[i]-96);
        int val = s[i] - 96;
        // printf("%d\n",val);
        fre[val]++;
    }
    for(int i=1; i<= 5; i++)
    {
        if(fre[i] != 0)
        {
            printf("%c : %d\n",i+96,fre[i]);
        }
        
    }

    return 0;
}