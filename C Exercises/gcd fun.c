// Determine GCD of two integers

#include <stdio.h>

int gcd(int n1,int n2)
{
    int rem;
    while(n2 != 0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    return n1;
}

int main()
{
    int i,f;
    printf("Enter two number:");
    scanf("%d %d",&i,&f);
    int res1=gcd(i,f);
    printf("GCD of %d and %d = %d\n",i,f,res1);

    return 0;
}
