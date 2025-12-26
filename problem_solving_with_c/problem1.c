#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        long long int m;
        scanf("%lld",&m);
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int factor = a*b*c;
        if(m % factor ==0)
        {
            printf("%lld\n",m/factor);
        }
        else
        {
            printf("-1\n");
        }


    }
    

    return 0;
}