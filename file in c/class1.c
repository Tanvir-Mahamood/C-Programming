#include <stdio.h>
int main()
{
    FILE *fi,*fo;
    int R,C,row,col;

    fi=fopen("input.doc","w");

    printf("Enter ROW and COL:");
    scanf("%d %d",&R,&C);
    int matrix[R][C];
    //taking input from user through keyboard
    for(row=0;row<R;row++)
    {
        for(col=0;col<C;col++)
        {
            scanf("%d",&matrix[row][col]);
        }
    }

    //printing in the file
    fprintf(fi,"%d %d\n",R,C);
    for(row=0;row<R;row++)
    {
        for(col=0;col<C;col++)
        {
            fprintf(fi,"%d ",matrix[row][col]);
        }
        fprintf(fi,"\n");
    }

    return 0;
}

