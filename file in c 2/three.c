#include <stdio.h>

int main()
{
    char str[50]="this is the first time.";
    int i=0;

    while(str[i] != '\0')
    {
        if(str[i]=='t' && str[i+1]=='h' && str[i+2]=='e')
        {
            str[i]='x';
            str[i+1]='x';
            str[i+2]='x';
        }
        i++;
    }
    i=0;
    while(str[i] != '\0')
    {
        if(str[i]=='x') str[i]="\n";
        printf("%c",str[i]);
        i++;
    }

    return 0;
}
