#include <stdio.h>
int main()
{

    int row,col,R,C;
    printf("Enter the number of row and collumn:");
    scanf("%d %d",&R,&C);
    int A[R][C], B[R][C],sum[R][C];

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

    //scaning matrix B
    printf("Enter the elements of Matrix B:\n");
    for(row=0; row<R; row++)
    {
        for(col=0; col<C; col++)
        {
            printf("B[%d][%d]=",row,col);
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }

    //printing matrix A
    printf("A:\n");
    for(row=0; row<R; row++)
    {
        printf("\t");
        for(col=0; col<C; col++)
        {
            printf("%d ",A[row][col]);

        }
        printf("\n");
    }

    //printing matrix B
    printf("\nB:\n");
    for(row=0; row<R; row++)
    {
        printf("\t");
        for(col=0; col<C; col++)
        {
            printf("%d ",B[row][col]);

        }
        printf("\n");
    }

    //adding the matrix
    for(row=0; row<R; row++)
    {
        for(col=0; col<C; col++)
        {
            sum[row][col]=A[row][col]+B[row][col];

        }

    }

    //printing summation
    printf("\nSum:\n");
    for(row=0; row<R; row++)
    {
        printf("\t");
        for(col=0; col<C; col++)
        {
            printf("%d ",sum[row][col]);

        }
        printf("\n");
    }
    return 0;


}
