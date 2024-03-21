#include <stdio.h>
//i+...+3+4+5+...+f
unsigned long long sum(int a,int b)
{
    if(b != a) return b+sum(a,b-1);
    else return a;
}

int main()
{
    int i,f;
    printf("Enter initial and final number:");
    scanf("%d %d",&i,&f);
    unsigned long long res=sum(i,f);
    printf("Summation from %d to %d = %llu\n",i,f,res);

    return 0;
}

