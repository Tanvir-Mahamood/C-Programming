// Determine size of a string

#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str,100,stdin);
    int i=0,len=0;
    while(str[i] != '\0')
    {
        i++;
        len++;
    }
    printf("Length= %d\n",len-1);

    return 0;
}
