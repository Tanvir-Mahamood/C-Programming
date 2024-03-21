// Fractional decimal to binary number

#include <stdio.h>
#include <math.h>
int main()
{

    float num,res2;
    int res1,sum1=0,sum2=0,count1=0,count2,temp,r;

    printf("Enter Positive Decimal Number: ");
    scanf("%f",&num);
    printf("How many digits after '.': ");
    scanf("%d",&count2);

    temp=num;
    res2=num-temp;

    while(temp != 0)
    {
        r=temp%2;
        temp/=2;
        sum1+=r*pow(10,count1);
        count1++;
    }

    while(count2 != 0)
    {
        res2*=2;
        res1=res2;
        sum2+=res1*pow(10,count2);
        res2-=res1;
        count2--;
    }

    printf("Binary of %f is : %d.%d\n",num,sum1,sum2);



    return 0;
}
