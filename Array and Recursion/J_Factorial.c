#include<stdio.h>
void fact(int n,int i,long long int value)
{
    value = value * i;
    if(i == n)
    {
        printf("%lld",value);
        return;
    }
    
    fact(n,i+1,value);
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int value=1;
    fact(n,1,value);

    return 0;
}