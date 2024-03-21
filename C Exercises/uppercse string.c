// Convert lower case characters to upper case in a string

#include<stdio.h>
int main()
{

    char text[100];
    fgets(text,100,stdin);
    int i=0;
    while(text[i] != 0)
    {
        if(text[i]>='a' && text[i]<='z' ) text[i]-=32;
        i++;
    }
    printf("%s",text);

    return 0;
}
