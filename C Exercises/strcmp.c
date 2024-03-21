// Compare 2 strings

#include <stdio.h>
int main()
{
    char f[100];
    char s[100];
    printf("Enter the first string:");
    gets(f);
    printf("Enter the second string:");
    gets(s);
    int i=0,j=0,lenf=0,lens=0,flag=0;
    while(f[i] != '\0')
    {
        i++;
        lenf++;
    }
    while(s[j] != '\0')
    {
        j++;
        lens++;
    }
    if(lenf==lens)
    {
        for(i=0;i<lenf;i++)
        {
            if(f[i] != s[i])
            {
                flag=1;
                break;
            }
        }
    }
    else flag=1;
    if(flag==1) printf("The strings are not same");
    else printf("The strings are same");


    return 0;
}

