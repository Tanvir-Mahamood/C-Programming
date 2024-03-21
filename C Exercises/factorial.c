#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter Number:");
    scanf("%d",&n);
    unsigned long long fact=1;
    for(i=2;i<=n;i++)
        fact*=i;
    printf("Factorial of %d = %llu",n,fact);

    return 0;
}
