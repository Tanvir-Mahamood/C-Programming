// Sum of numbers divisible by 3

#include <stdio.h>
int main()
{
    int n;
    long long sum=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(int i=3;i<=n;i+=3)
        sum+=i;
    printf("Sum= %lld\n",sum);

    return 0;
}
