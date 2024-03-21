// Determine factorial of a given number

#include <stdio.h>

long long factorial(int a)
{
    long long fact=1;
    for(int i=2;i<=a;i++) fact=fact*i;
    return fact;
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial of %d = %lld",n,factorial(n));
    return 0;
}
