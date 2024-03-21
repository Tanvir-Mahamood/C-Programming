#include <stdio.h>
int main()
{
    char *ptr;
    char dept[30]="c.s.e.";
    ptr=dept;
    int len=strlen(dept);
    for(int i=0;i<len;i++)
        printf("%c",*(ptr+i));

    return 0;
}
