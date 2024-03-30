/*
Enter Students information. Then print all information
*/

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
    int i,j,tempcgpa,temproll;
    char tempname[20];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].cgpa>s[j].cgpa)
            {
                tempcgpa=s[i].cgpa;
                s[i].cgpa=s[j].cgpa;
                s[j].cgpa=tempcgpa;

                temproll=s[i].roll;
                s[i].roll=s[j].roll;
                s[j].roll=temproll;

                strcpy(tempname,s[i].name);
                strcpy(s[i].name,s[j].name);
                strcpy(s[j].name,tempname);
            }
        }
    }

    for(i=n-1;i>=0;i--)
    {
        printf("\n\nName=%s Roll=%d CGP=%f\n",s[i].name,s[i].roll,s[i].cgpa);
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

