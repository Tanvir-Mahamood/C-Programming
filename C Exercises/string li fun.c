// use String functions

#include <stdio.h>
int main()
{
    char first[100],sec[100],copy[100];
    printf("Enter the first string:");
    gets(first);
    printf("Enter the second string:");
    gets(sec);

    printf("length of first string = %d\n",strlen(first));
    printf("length of second string = %d\n",strlen(sec));

    int d=strcmp(first,sec);
    if(d==0) printf("The strings are same.\n");
    else printf("The strings are not same.\n");

    strcpy(copy,first);
    printf("Copied version of first string = %s\n",copy);

    strcat(first,sec);
    printf("String-1 + String-2 = %s\n",first);

    return 0;
}


