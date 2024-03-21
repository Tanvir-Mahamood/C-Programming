// Copy a string

#include <stdio.h>
int main()
{
    char str[100];
    char copy[100];
    printf("Enter the string:");
    fgets(str,100,stdin);
    int i=0;
    while(str[i] != '\0')
    {
        copy[i]=str[i];
        i++;
    }
    copy[i]='\0';
    printf("Copy of the string:%s",copy);
    return 0;
}

