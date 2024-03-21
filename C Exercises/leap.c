// Write a c program to check if a given year is leap year or not

#include <stdio.h>
int main()
{
    int y;
    printf("Enter year: ");
    scanf("%d",&y);
    if(y%400==0)
        printf("%d is a Leap year.\n",y);
    else if(y%100==0)
        printf("%d is not a Leap year.\n",y);
    else if(y%4==0)
        printf("%d is a Leap year.\n",y);
    else
        printf("%d is not a Leap year.\n",y);

    return 0;
}
