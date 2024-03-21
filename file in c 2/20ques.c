#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int roll;
    char mobile[20];
    float cgpa;
};

void check(struct student s[100],int n)
{
    int i,j,temproll;
    char tempname[20];
    float tempcgpa;
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
    n=5;
    struct student s[n];

    FILE *fi;
    fi=fopen("input.doc","r");

    for(i=0;i<n;i++)
    {
        fscanf(fi,"%s %d %s %f",s[i].name,&s[i].roll,s[i].mobile,&s[i].cgpa);

    }
    check(s,n);
    return 0;
}


