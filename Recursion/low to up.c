#include <stdio.h>

char up(char ch)
{
    if(ch>='a' && ch<='z') ch=ch-32;
    return ch;
}

int main()
{
    char str[100];
    char ch;
    printf("Enter text:");
    fgets(str,100,stdin);
    int i=0;
    while(str[i] != '\0')
    {
        ch=up(str[i]);
        printf("%c",ch);
        i++;
    }

    return 0;
}

