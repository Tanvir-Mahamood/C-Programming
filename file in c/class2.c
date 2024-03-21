#include <stdio.h>
int main()
{
    FILE *fi;
    fi=fopen("input.doc","r");

    int R,C,row,col;

    fscanf(fi,"%d %d",&R,&C);
    //fscanf(fi,"\n"); //no need to use newline
    printf("%d %d\n",R,C);
    int matrix[R][C];

    for(row=0;row<R;row++)
    {
        for(col=0;col<C;col++)
        {
            fscanf(fi,"%d",&matrix[row][col]);
        }
        //fscanf(fi,"\n"); no need to use newline
    }

    for(row=0;row<R;row++)
    {
        for(col=0;col<C;col++)
        {
            printf("%d ",matrix[row][col]);
        }
        printf("\n");
    }


    return 0;
}
