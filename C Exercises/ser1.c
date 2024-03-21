// Print = n , (n-2) , (n-4) , ... , 2 , 0

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(int i=n;i>=0;i-=2)
        printf("%d ",i);

    return 0;
}
