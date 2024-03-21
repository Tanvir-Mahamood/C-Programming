#include <stdio.h>

int main() {
    char s[100],ch;
    printf("Enter string:") ;
    fgets(s,100,stdin);
    int i=0;

    while((ch=s[i]) != '\0')
    {
        int num=ch;
        int r,temp,count=0,sum=0;
        temp=num;
        while(temp!=0)
        {
            r=temp%2;
            temp=temp/2;
            sum=sum + r*pow(10,count);
            count++;
        }
        printf("%08d ",sum);
        i++;
    }

    return 0;
}
