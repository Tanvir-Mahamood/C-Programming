//Input 2 integers a and b, then print all odd integers in the range [a,b]

#include<stdio.h>
int main()
{
    int a,b,i,temp;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    a+= !(a%2);

    for(i=a; i<=b; i+=2)
        printf("%d ",i);

    return 0;
}
