// Square Root
// Multiple value return

#include <stdio.h>
#include <math.h>
void fun(int n,int *s,int *r)
{
    *s=n*n;
    *r=sqrt(n);
}

int main()
{
    int n=25,sq,root;
    fun(n,&sq,&root);
    printf("%d %d",sq,root);
    return 0;
}
