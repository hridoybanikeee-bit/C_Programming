#include<stdio.h>
void shift(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] == 0)
            {
                int tmp;
                tmp = a[i];
                a[i] =a[j];
                a[j] = tmp;

            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    shift(a,n);
    
    return 0;
}