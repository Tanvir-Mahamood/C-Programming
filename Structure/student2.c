#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    float gpa;
};

void search(struct student s[5])
{
    int rol,i,index;
    printf("Enter the Roll:");
    scanf("%d",&rol);
    for(i=0;i<5;i++)
    {
        if(rol==s[i].roll)
        {
            index=i;
            break;
        }
    }
    printf("Name= %s and GPA= %f\n",s[index].name,s[index].gpa);
}

int main()
{
    struct student s[5];
    s[5].roll={2003061,2003062,2003063,2003064,2003065};
    s[5].name={"mim","tanvir","foyez","asif","sefat"};
    s[5].gpa={3.98,3.78,3.97,3.98,3.99};
    search(s);
    return 0;
}

