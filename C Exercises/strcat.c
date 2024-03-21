// string Concatenation

#include <stdio.h>
int main()
{
    char f[100],s[100];
    printf("Enter the first string:");
    gets(f);
    printf("Enter the second string:");
    gets(s);
    int i=0,j=0,len=0;
    while(f[i] != '\0')
    {
        i++;
        len++;
    }
    while(s[j] != '\0')
    {
        f[len+j]=s[j];
        j++;
    }
    f[len+j]='\0';
    printf("New string : %s",f);
    return 0;
}


