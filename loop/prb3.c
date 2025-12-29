#include<stdio.h>
int count_before_one(int A[],int n)
{
    int count = 0;
    for(int i=1; i<=n; i++)
    {
        if(A[i] != 1)
        {
            count++;
            
        }
        else
        {
            break;
        }
        
    }
    return count;
}
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=1; i<=N; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("%d",count_before_one(A,N));

    return 0;
}