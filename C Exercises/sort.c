// Sort an array

#include <stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    //for ascending
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending Order:\n");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);

    //for descending order
    printf("\nDescending Order\n");
    for(i=n-1; i>=0; i--)
        printf("%d ",a[i]);

    return 0;
}
