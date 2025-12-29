#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag = 0;
    int arr[14] = {4,7,47,74,447,474,444,747,774,777,44,77,477,744};
    for(int i=0; i<14; i++)
    {
        if(n % arr[i] == 0)
        {
            flag++;
            break;
        }
    }
    if(flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    
    
  
    return 0;
}