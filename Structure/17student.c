#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int roll;
    float cgpa;
};

void check(struct student s[100],int n)
{
    int i;
    char str[20];
    printf("Enter name:");
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
        if(strcmp(str,s[i].name)==0)
        {
            printf("Roll no of %s = %d",str,s[i].roll);
            break;
        }
    }
}


int main()
{
    int n,i;
    printf("How many students? :");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the name of student %d:",i+1);
        scanf("%s",s[i].name);
        printf("Enter the roll of student %d:",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the cgpa of student %d:",i+1);
        scanf("%f",&s[i].cgpa);
        printf("\n");

    }
    check(s,n);
    return 0;
}
