//Reverse a number

#include <stdio.h>

int reverse(int num)
{
    int r;
    int sum=0;
    while(num != 0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reverse of %d = %lld",n,reverse(n));

    return 0;
}

