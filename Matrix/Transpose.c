#include <stdio.h>
int main()
{
    int row,col,R,C;
    printf("Enter the number of row and collumn:");
    scanf("%d %d",&R,&C);
    int A[R][C], tran[R][C];

    //scaning matrix A
    printf("Enter the elements of Matrix A:\n");
    for(row=0; row<R; row++)
    {
        for(col=0; col<C; col++)
        {
            printf("A[%d][%d]=",row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }

    //Operation-Transpose
    for(row=0;row<R;row++)
    {
        for(col=0;col<C;col++)
        {
            tran[col][row]=A[row][col];
        }
    }

    //Printing matrix
    for(row=0;row<C;row++)
    {
        printf("\t");
        for(col=0;col<R;col++)
        {
            printf("%d ",tran[row][col]);
        }
        printf("\n");
    }



    return 0;
}
