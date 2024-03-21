// Print MSB and LSB of a number

#include <stdio.h>
int main()
{
    unsigned long long n;
    int r;
    printf("Enter a number:");
    scanf("%d",&n);
    int msb=n%10;
    while(n != 0)
    {
        r=n%10;
        n=n/10;
    }
    int lsb=r;
    printf("MSB and LSB are : %d and %d",msb,lsb);

    return 0;
}
