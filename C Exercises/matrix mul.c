#include <stdio.h>
int main()
{
    int r1,c1,r2,c2,row,col,ele,sum=0;
    printf("Enter row and column for Matrix A: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column for Matrix B: ");
    scanf("%d %d",&r2,&c2);
    if(c1 != r2) printf("Error!!!");
    else
    {
        int A[r1][c1],B[r2][c2],mul[r1][c2];

        //scaning matrix A
        printf("\nEnter the elements of Matrix A:\n");
        for(row=0; row<r1; row++)
        {
            for(col=0; col<c1; col++)
            {
                scanf("%d",&A[row][col]);
            }
            printf("\n");
        }

        //scaning matrix B
        printf("\nEnter the elements of Matrix B:\n");
        for(row=0; row<r2; row++)
        {
            for(col=0; col<c2; col++)
            {
                scanf("%d",&B[row][col]);
            }
            printf("\n");
        }

        //multilpication
        for(row=0; row<r1; row++)
        {
            for(col=0; col<c2; col++)
            {
                for(ele=0; ele<c1; ele++)
                {
                    sum+=A[row][ele]*B[ele][col];
                }
                mul[row][col]=sum;
                sum=0;
            }
        }

        //Printing multiplication
        printf("\nMultiplication:\n");
        for(row=0; row<r1; row++)
        {
            printf("\t");
            for(col=0; col<c2; col++)
            {
                printf("%d ",mul[row][col]);
            }
            printf("\n");
        }

    }
    return 0;
}

