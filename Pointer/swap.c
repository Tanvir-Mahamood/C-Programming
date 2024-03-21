// swap using pointer

#include <stdio.h>

void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}

int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    swap(&n1,&n2);
    printf("%d %d",n1,n2);
    return 0;
}
