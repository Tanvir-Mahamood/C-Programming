//Input 2 integers a and b, then print all the integers divisible by 5 in the range [a,b]
//with arrow signs

#include<stdio.h>
int main()
{
    int a,b,i,temp,count=0;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }

    if(a%5 != 0) a+=5-a%5;
    if(b%5 != 0) b-=b%5;

    for(i=a; i<b; i+=5)
        printf("%d->",i);
    printf("%d.\n",i);


    return 0;
}

