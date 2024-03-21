#include <stdio.h>
int main()
{
    FILE *fi;
    char str[20];

    fi=fopen("sample1.txt","w");

    gets(str);
    fprintf(fi,"%s",str);
    return 0;
}
