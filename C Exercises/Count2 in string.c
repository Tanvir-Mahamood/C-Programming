// Count vowel and Consonant in a string. String with space characters is also allowed

#include<stdio.h>
int main()
{
    char text[100];
    char ch;
    int vow,cap;
    vow=cap=0;
    fgets(text,100,stdin);
    int i=0;
    while((ch=text[i]) != 0)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') vow++; //as well as for capital case
        else cap++;

        i++;
    }
    printf("Vowel = %d\n",vow);
    printf("Consonant = %d\n",cap);

    return 0;
}

