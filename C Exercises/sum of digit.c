// print sum of digits of a number

#include <stdio.h>

long long digitsum(int num)
{
    int r;
    long long sum=0;
    while(num != 0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits of %d = %lld",n,digitsum(n));

    return 0;
}
