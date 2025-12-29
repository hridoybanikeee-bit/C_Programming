#include<stdio.h>
void swap(int* a,int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Before swap: %d\n",x);
    printf("Berore swap: %d\n", y);
    swap(&x,&y);
    printf("After swap: %d\n",x);
    printf("After swap: %d\n", y);

    return 0;
}