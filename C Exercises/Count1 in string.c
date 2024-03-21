// Given a string. Count the number of capital, small, digit, word and spacial characters. String with space characters is also allowed

#include<stdio.h>
int main()
{
    char text[100];
    char ch;
    int capital,small,number,space,special;
    capital=small=number=space=special=0;
    fgets(text,100,stdin);
    int i=0;
    while((ch=text[i]) != 0)
    {
        if(ch>='A' && ch<='Z' ) capital++;
        else if(ch>='a' && ch<='z' ) small++;
        else if(ch>='0' && ch<='9' ) number++;
        else if(ch==' ') space++;
        else special++;

        i++;
    }
    printf("Capital = %d\n",capital);
    printf("Small = %d\n",small);
    printf("Number = %d\n",number);
    printf("Word = %d\n",space+1);
    printf("Special = %d\n",special-1); //to erase null character.

    return 0;
}
