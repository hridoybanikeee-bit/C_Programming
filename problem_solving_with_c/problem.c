#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1001], t[1001];
    int a,b;
    scanf("%s",s);
    scanf("%s",t);
    scanf("%d %d",&a,&b);
    printf("%s",s);
    int len = strlen(t);
    if(b>len)
    {
        b = len-1;
    }
    
    for(int i=a; i<=b; i++)
    {
        
        
        printf("%c",t[i]);
        
        
    }
    return 0;
}
