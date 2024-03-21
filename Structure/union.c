#include <stdio.h>

union Book
{
    int bookno;
    float price;
    char author[30];
};

void getoutput(union Book bk1,union Book bk2,union Book bk3)
{
    printf("we have boos named: %d %d %d\n",bk1.bookno,bk2.bookno,bk3.bookno);
    printf("price of them are: %f %f %f\n",bk1.price,bk2.price,bk3.price);
    printf("the first author is : %s",bk1.author);

}

int main()
{
    union Book b1,b2,b3;
    //printf("%d",sizeof(b1));
    printf("Enter the number of first book:");
    scanf("%d",&b1.bookno);
    printf("price=");
    scanf("%f",&b1.price);
    //printf("Who is the author:");
    //gets(b1.author);

    printf("Enter the number of second book:");
    scanf("%d",&b2.bookno);
    printf("price=?");
    scanf("%f",&b2.price);
    //printf("Who is the author:");
    //gets(b2.author);

    printf("Enter the number of third book:");
    scanf("%d",&b3.bookno);
    printf("price=?");
    scanf("%f",&b3.price);
    //printf("Who is the author:");
    //gets(b3.author);

    getoutput(b1,b2,b3);


    return 0;
}

