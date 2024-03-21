#include <stdio.h>

unsigned long long factorial(int a)
{
    if(a != 0) return a*factorial(a-1);
    else return 1;
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    unsigned long long res=factorial(n);
    printf("factorial of %d = %llu\n",n,res);

    return 0;
}
