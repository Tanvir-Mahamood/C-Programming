#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fi;
    char name[20];
    fi=fopen("test.doc","r");

    fscanf(fi,"%s",name);
    printf("%s",name);
    fclose(fi);



    return 0;
}

