//Input 2 integers a and b, then print all the integers divisible by 3 in the range [a,b]

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
    if(a%3==1) a+=2;
    else if(a%3==2) a++;

    for(i=a; i<=b; i+=3)
        printf("%d ",i);

    return 0;
}

