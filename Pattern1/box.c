/*

5
*****
*   *
*   *
*   *
*****

*/

#include<stdio.h>
int main()
{
    int n,line,star;
    scanf("%d",&n);
    for(line=1; line<=n; line++)
    {
        for(star=1; star<=n; star++)
        {
            if(line==1 || line==n || star==1 || star==n )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
