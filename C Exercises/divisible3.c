//Input 2 integers a and b, then print all the integers divisible by 3 in the range [a,b]
//with arrow signs

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

    if(b%3==0) b-=1;
    else if(b%3==1) b-=2;
    else b-=3;

    for(i=a; i<b; i+=3)
        printf("%d->",i);
    printf("%d.\n",i);


        return 0;
}
