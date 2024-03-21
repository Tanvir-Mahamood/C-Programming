//Print Fibonacci Series

#include <stdio.h>
int main()
{
    int first=0,second=1,count=0,fib,n;
    printf("Enter N=");
    scanf("%d",&n);
    while(count++<n)
    {
        if(count<=1)
            fib=count;
        else
        {
            fib=first+second;
            first=second;
            second=fib;
        }
        printf("%d ",fib);
    }
    return 0;
}
