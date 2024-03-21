/*

5
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main()
{
    int n,line,star;
    scanf("%d",&n);
    for(line=n;line>0;line--)
    {
        for(star=1;star<=n-line;star++)
            printf(" "); //space

        for(star=1; star<=line; star++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

