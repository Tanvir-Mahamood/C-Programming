#include <stdio.h>
int main()
{
    FILE *fi;
    fi=fopen("input.doc","r");

    int row,col;
    int matrix[4][2];

    for(row=0;row<4;row++)
    {
        for(col=0;col<2;col++)
        {
            fscanf(fi,"%d",&matrix[row][col]);
        }
    }

    for(row=0;row<4;row++)
    {
        for(col=0;col<2;col++)
        {
            printf("%d ",matrix[row][col]);
        }
        printf("\n");
    }


    return 0;
}

