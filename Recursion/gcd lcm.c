#include <stdio.h>

int gcd(n1,n2)
{
    if(n2 != 0) return gcd(n2,n1%n2);
    else return n1;
}

int lcm(int a,int b,int c)
{
    return (a*b)/c;
}

int main()
{
    int num1,num2;
    printf("Enter the two numbers: ");
    scanf("%d %d",&num1,&num2);
    int GCD=gcd(num1,num2);
    printf("GCD of %d and %d = %d\n",num1,num2,GCD);
    printf("LCM of %d and %d = %d\n",num1,num2,lcm(num1,num2,GCD));

    return 0;
}

/*         gcd(60,24) n1,n2
    return gcd(24,60%24); return gcd(24,12)
    return gcd(12,24%12); return gcd(12,0)
    n2==0 return n1=12
