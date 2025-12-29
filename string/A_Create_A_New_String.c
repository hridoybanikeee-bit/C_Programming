#include<stdio.h>
int main()
{
    char a[1001];
    char b[1001];
    scanf("%s %s",&a,&b);
    // int dig_a = strlen(a);
    // int dig_b = strlen(b);
    int a_sum = 0;
    int b_sum = 0;
    for(int i = 0; a[i] != '\0'; i++)
    {
        a_sum += 1;
    }
    for(int i = 0; b[i] != '\0'; i++)
    {
        b_sum += 1;
    }
    printf("%d %d\n",a_sum,b_sum);
    printf("%s %s",a,b);
    return 0;
}