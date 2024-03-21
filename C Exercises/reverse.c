// Reverse a number

#include <stdio.h>
int main()
{
    long long n,r;
    long long sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n != 0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("Reverse of %lld = %lld\n",n,sum);

    return 0;
}
