#include<stdio.h>
#include<math.h>
int main()
{
    int arr[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int row_idx = 0;
    int col_idx = 0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j] == 1)
            {
                // row_idx = i;
                col_idx = j;
                break;
            }
        }
    }
    // printf("%d\n",row_idx);
    // printf("%d",col_idx);
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j] == 1)
            {
                row_idx = i;
                // col_idx = j;
                break;
            }
        }
    }
    // printf("%d\n",row_idx);
    // printf("%d\n",col_idx);

    int req_row_move = abs(2 - row_idx);
    int req_cols_move = abs(2 - col_idx);

    // printf("%d\n",req_row_move);
    // printf("%d\n",req_cols_move);
    int grand_total = req_cols_move + req_row_move;
    printf("%d",grand_total);
    
    return 0;
}