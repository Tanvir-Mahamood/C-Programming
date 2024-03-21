#include<stdio.h>
int main()
{
    int a,b,i,n,temp;
    printf("Enter range:");
    scanf("%d %d",&a,&b);
    printf("Divisible by what? :");
    scanf("%d",&n);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }

    if(a%n != 0) a+=n-a%n;
    if(b%n != 0) b-=b%n;

    for(i=a; i<b; i+=n)
        printf("%d->",i);
    printf("%d.\n",i);


    return 0;
}

