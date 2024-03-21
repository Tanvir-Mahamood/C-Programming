// Take input 2 integers as range.Print all palindromic number between the range

#include <stdio.h>

int palindrome(int n)
{
    int r,sum=0;
    while(n != 0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return sum;

}

int main()
{
    int n1,n2,i,res;

    printf("Enter the range:");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        res=palindrome(i);
        if(res==i) printf("%d ",i);
    }

    return 0;
}



