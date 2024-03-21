// Determine sum = 1+2+3+...+N

#include <stdio.h>

long long sum(int a)
{
    long long summation=0;
    for(int i=1;i<=a;i++) summation+=i;
    return summation;
}

int main()
{
    int i;
    printf("Enter the value of n:");
    scanf("%d",&i);
    long long res=sum(i);
    printf("Sum from 1 to %d = %lld",i,res);

    return 0;
}
