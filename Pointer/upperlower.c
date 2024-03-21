// case converter using pointer

#include <stdio.h>

void caseconverter(char *s)
{
    while(*s != '\0')
    {
        if(*s>='A' && *s<='Z') *s+=32;
        else if(*s>='a' && *s<='z') *s-=32;
        s++;
    }
}

int main()
{
    char str[50]="HO-Jo-BO-Ro-Lo";
    caseconverter(str);
    printf("%s",str);
    return 0;
}
