#include<stdio.h>
int main()
{
    long long int a,b;
    long long int last_a,last_b;
    scanf("%lld %lld",&a,&b);
    last_a = a % 10;
    last_b = b % 10;
    long long int c= last_a + last_b;
    printf("%lld",c);
    


    return 0;
}