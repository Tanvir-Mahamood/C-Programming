/*

5
    *
   **
  ***
 ****
*****

*/


#include<stdio.h>
int main()
{
    int n,line,star;
    scanf("%d",&n);
    for(line=1;line<=n;line++)
    {
        for(star=1;star<=n-line;star++)
            printf(" ");

        for(star=1; star<=line; star++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
