#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fi;
    char ch;
    fi=fopen("test.doc","r");

    while(!feof(fi))
    {
        ch=fgetc(fi);
        printf("%c",ch);

    }
    fclose(fi);



    return 0;
}
