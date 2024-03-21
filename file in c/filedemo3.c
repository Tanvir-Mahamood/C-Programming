#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fi;

    char str[20];
    int age;
    //gets(str);
    int len=strlen(str);
    int i;


    fi=fopen("test.doc","a");

    printf("Enter your name:");
    gets(str);
    printf("Enter your age:");
    scanf("%d",&age);

    fprintf(fi,"\nName= %s Age= %d\n",str,age);

    fclose(fi);

    return 0;
}

