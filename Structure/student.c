#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    float gpa;
};

void highest(struct student s[5])
{
    float max=s[0].gpa;
    int i,index=0;
    for(i=1;i<5;i++)
    {
        if(s[i].gpa>=max)
        {
            max=s[i].gpa;
            index=i;
        }
    }
    printf("%s holds the highest GPA and his roll = %d\n",s[index].name,s[index].roll);
}

int main()
{
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the roll of student %d:",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the name of student %d:",i+1);
        scanf("%s",s[i].name);
        printf("Enter the GPA of student %d:",i+1);
        scanf("%f",&s[i].gpa);
        printf("\n");
    }
    highest(s);
    return 0;
}
