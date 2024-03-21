// Take input 2 integers as range.Print all perfect number between the range.
// 145 is a perfect number. Because 145 = 1! + 4! + 5!

#include <stdio.h>

long long factorial(int num)
{
    long long fact=1;
    int i;
    for(i=2;i<=num;i++) fact=fact*i;
    return fact;
}


long long perfect(int n)
{
    int r;
    long long res,sum=0;
    while(n != 0)
    {
        r=n%10;
        res=factorial(r);
        sum=sum+res;
        n=n/10;
    }
    return sum;

}

int main()
{
    int n1,n2,i;
    long long result;

    printf("Enter the range:");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        result=perfect(i);
        if(result==i) printf("%d ",i);
    }

    return 0;
}



