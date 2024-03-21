// Enter marks of several subjects. Determine their average mark.

#include <stdio.h>
int main()
{
    int n,i;
    long long sum=0;
    printf("Enter the number of Subjects:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the marks for each subjects:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Avarage = %.2lf\n",(double)sum/n);

    return 0;
}
