#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fi;

    char str[20];
    gets(str);
    int len=strlen(str);
    int i;


    fi=fopen("test.doc","a");

    for(i=0;i<len;i++)
    {
        fputc(str[i],fi);
    }
    fclose(fi);

    return 0;
}

