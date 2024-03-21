// Base Conversion (Dec, Bin, Oct, Hex)

#include <stdio.h>

void decimal(int num)
{
    int r,temp,count=0,sum=0;
    char out[20];
    char ch;
    printf("Enter your result base:");
    scanf("%s",out);
    ch=out[0];
    switch(ch)
    {
    case 'd':
        printf("%d\n",num);
        break;
    case 'h':
        printf("%x\n",num);
        break;
    case 'o':
        printf("%o\n",num);
        break;
    case 'b':
    {
        temp=num;
        while(temp != 0)
        {
            r=temp%2;
            temp/=2;
            sum+=r*pow(10,count);
            count++;
        }
        printf("%d\n",sum);
    }
    break;
    default :
        printf("Invalid input");
    }

}

void hexadecimal(int num)
{
    int r,count=0,sum=0;
    int temp=num;
    char out[20];
    char ch;
    printf("Enter your result base:");
    scanf("%s",out);
    ch=out[0];
    switch(ch)
    {
    case 'h':
        printf("%x\n",num);
        break;
    case 'd':
        printf("%d\n",num);
        break;
    case 'o':
        printf("%o\n",num);
        break;
    case 'b':
    {
        //temp=num;
        while(temp != 0)
        {
            r=temp%2;
            temp/=2;
            sum+=r*pow(10,count);
            count++;
        }
        printf("%d\n",sum);
    }
    break;
    default :
        printf("Invalid input");
    }

}

void octal(int num)
{
    int r,count=0,sum=0;
    int temp=num;
    char out[20];
    char ch;
    printf("Enter your result base:");
    scanf("%s",out);
    ch=out[0];
    switch(ch)
    {
    case 'o':
        printf("%o\n",num);
        break;
    case 'd':
        printf("%d\n",num);
        break;
    case 'h':
        printf("%x\n",num);
        break;
    case 'b':
    {
        //temp=num;
        while(temp != 0)
        {
            r=temp%2;
            temp/=2;
            sum+=r*pow(10,count);
            count++;
        }
        printf("%d\n",sum);
    }
    break;
    default :
        printf("Invalid input");
    }

}

void binary(int num)
{
    int temp,r,count=0,sum=0;
    temp=num;
    while(temp != 0)
    {
        r=temp%10;
        temp/=10;
        sum+=r*pow(2,count);
        count++;
    }
    char out[20];
    char ch;
    printf("Enter your result base:");
    scanf("%s",out);
    ch=out[0];
    switch(ch)
    {
    case 'd':
        printf("%d\n",sum);
        break;
    case 'o':
        printf("%o\n",sum);
        break;
    case 'h':
        printf("%x\n",sum);
        break;
    case 'b':
        printf("%d\n",num);
        break;
    default :
        printf("Invalid input");
    }


}

int main()
{

    int num;
    char arr[20];
    printf("Enter base of your number: ");
    scanf("%s",&arr);


    if(arr[0]=='d')
    {
        printf("Enter decimal number: ");
        scanf("%d",&num);
        decimal(num);
    }
    else if(arr[0]=='h')
    {
        printf("Enter hexadecimal number: ");
        scanf("%x",&num);
        hexadecimal(num);
    }

    else if(arr[0]=='o')
    {
        printf("Enter octal number: ");
        scanf("%o",&num);
        octal(num);
    }

    else if(arr[0]=='b')
    {
        printf("Enter binary number: ");
        scanf("%d",&num);
        binary(num);
    }

    else
        printf("Wrong Input");


    return 0;
}
