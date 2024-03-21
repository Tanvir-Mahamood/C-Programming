// Print an array with an inserted new value

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
    printf("Enter the index number which is needed to be inserted: ");
    scanf("%d",&index);
    printf("Enter the value for insertion: ");
    scanf("%d",&value);
    if(index<n)
    {
        for(i=0;i<index;i++)
            printf("%d ",a[i]);
        printf("%d ",value);
        for(i=index+1;i<n;i++)
            printf("%d ",a[i]);
    }
    else
        printf("Invalid Command.");

    return 0;
}
