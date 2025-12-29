#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    int small,cap,dig;
    
    for(int i=0; i<t; i++)
    {
        small=0;
        cap = 0;
        dig = 0;
        char s[10001];
        scanf("%s",s);
        int len = strlen(s);
        for(int i=0; i<len; i++)
        {
            if(s[i] >= 'a' && s[i]<= 'z')
            {
                small++;
            }
            else if(s[i]>= 'A' && s[i] <= 'Z')
            {
                cap++;
            }
            else
            {
                dig++;
            }
        }
        printf("%d %d %d\n",cap,small,dig);
    }
    return 0;
}
