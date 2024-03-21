// Determine sum of elements of an array

#include <stdio.h>
int main()
{
    int n,i;
    long long sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Summation = %lld\n",sum);

    return 0;
}
