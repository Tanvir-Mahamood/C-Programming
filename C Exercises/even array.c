//Print Even elements from an array

#include <stdio.h>
int main()
{
    int n,i,index,value;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements for the array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("New array with even elements: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2 != 0)
            continue;
        printf("%d ",a[i]);
    }

    return 0;
}
