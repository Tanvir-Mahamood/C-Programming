#include <stdio.h>
int main()
{
    FILE *fi,*fo;

    fo=fopen("sample1.txt","r");
    fi=fopen("sample2.txt","w");

    char str[20];

    fscanf(fo,"%s",str);

    int i=0;
    while(str[i] != '\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') str[i]="";
        fprintf(fi,"%c",str[i]);
        i++;
    }



    return 0;
}
