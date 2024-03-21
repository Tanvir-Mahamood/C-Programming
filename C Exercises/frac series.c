//Determine sum = 1/i + 2/i + 3/i + ... + N/i


#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    double sum=0;
    printf("Sum of the series: 1 + ");
    for(i=2;i<n;i++)
        printf("1/%d + ",i);
    printf("1/%d = ",n);
    for(i=1;i<=n;i++)
        sum+=(double)1/i;
    printf("Sum= %lf\n",sum);

    return 0;
}
