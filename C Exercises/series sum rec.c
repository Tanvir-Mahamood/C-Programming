// // Determine sum = 1+2+3+...+N Recursively

#include <stdio.h>
unsigned long long sum(int a)
{
    if(a != 0) return a+sum(a-1);
    else return 0;
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    unsigned long long res=sum(n);
    printf("Summation from 1 to %d = %llu\n",n,res);

    return 0;
}
