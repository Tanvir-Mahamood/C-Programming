// Print: 2, 4, 6, ... , N

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2)
        printf("%d ",i);

    return 0;
}
