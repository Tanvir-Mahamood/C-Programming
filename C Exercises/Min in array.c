// Find minimum elements of an array

#include <stdio.h>
int main()
{
    int n,i,minimum;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    minimum=arr[0];
    for(i=1;i<n;i++)
    {
        if(minimum>arr[i])
            minimum=arr[i];
    }
    printf("%d",minimum);

    return 0;
}

