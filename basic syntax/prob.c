#include<stdio.h>
int main()
{
    long long int a,b,sum,sub;
    long long int mul;
    scanf("%lld %lld",&a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    printf("%lld + %lld = %lld\n",a,b,sum);
    printf("%lld * %lld = %lld\n",a,b,mul);
    printf("%lld - %lld = %lld\n",a,b,sub);
    return 0;
}