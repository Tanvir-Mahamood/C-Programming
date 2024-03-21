#include<stdio.h>

void sumsub(int k)
{
    int row,col,R,C;
    printf("Enter the number of row and column:");
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

    if(k==1)
    {
        //adding the matrix
        for(row=0; row<R; row++)
        {
            for(col=0; col<C; col++)
            {
                sum[row][col]=A[row][col]+B[row][col];

            }

        }
    }
    else
    {
        //substracting the matrix
        for(row=0; row<R; row++)
        {
            for(col=0; col<C; col++)
            {
                sum[row][col]=A[row][col]-B[row][col];

            }

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
}



void mul(int k)
{
    int r1,c1,r2,c2,row,col,ele,sum=0;
    printf("Enter row and column for Matrix A: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column for Matrix B: ");
    scanf("%d %d",&r2,&c2);
    while(c1 != r2)
    {
        printf("Error! Column of first matrix not equal to row of second matrix.Try again...");
        printf("\nEnter row and column for Matrix A: ");
        scanf("%d %d",&r1,&c1);
        printf("Enter row and column for Matrix B: ");
        scanf("%d %d",&r2,&c2);
    }

    int A[r1][c1],B[r2][c2],mul[r1][c2];

    //scaning matrix A
    printf("\nEnter the elements of Matrix A:\n");
    for(row=0; row<r1; row++)
    {
        for(col=0; col<c1; col++)
        {
            printf("A[%d][%d]=",row,col);
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
            printf("B[%d][%d]=",row,col);
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }

    //printing matrix A
    printf("A:\n");
    for(row=0; row<r1; row++)
    {
        printf("\t");
        for(col=0; col<c1; col++)
        {
            printf("%d ",A[row][col]);

        }
        printf("\n");
    }

    //printing matrix B
    printf("\nB:\n");
    for(row=0; row<r2; row++)
    {
        printf("\t");
        for(col=0; col<c2; col++)
        {
            printf("%d ",B[row][col]);

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

void trans(int k)
{
    int row,col,R,C;
    printf("Enter the number of row and column:");
    scanf("%d %d",&R,&C);
    int A[R][C], tran[C][R];

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
    for(row=0; row<R; row++)
    {
        for(col=0; col<C; col++)
        {
            tran[col][row]=A[row][col];
        }
    }

    //Printing matrix
    for(row=0; row<C; row++)
    {
        printf("\t");
        for(col=0; col<R; col++)
        {
            printf("%d ",tran[row][col]);
        }
        printf("\n");
    }


}

void identity(int k)
{
    int row,col,R,C;
    printf("Enter the number of row and column:");
    scanf("%d %d",&R,&C);
    if(R != C) printf("Error!! Row should be equal to Column");
    else
    {

        for(row=0; row<R; row++)
        {
            for(col=0; col<C; col++)
            {
                if(row==col) printf(" 1 ");
                else printf(" 0 ");
            }
            printf("\n");
        }
    }
}

int main()
{

    int k;
    printf("enter the key-number of matrix operation:\n\t1)Summation\n\t2)Subtraction\n\t3)Multiplication\n\t4)Transpose Matrix\n\t5)Identity\n");
    scanf("%d",&k);
    if(k==1 || k==2) sumsub(k);
    else if(k==3) mul(k);
    else if(k==4) trans(k);
    else identity(k);
    return 0;
}
