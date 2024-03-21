// Find maximum elements of an array

#include <stdio.h>
int main()
{
    int n,i,maximum;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    maximum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>maximum)
            maximum=arr[i];
    }
    printf("%d",maximum);

    return 0;
}
