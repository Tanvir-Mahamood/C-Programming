/*

5
    1
   121
  12321
 1234321
123454321

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
        for(star=1;star<=line;star++)
            printf("%d",star);
        for(star=line-1;star>=1;star--)
            printf("%d",star);
        printf("\n");
    }



    return 0;
}
