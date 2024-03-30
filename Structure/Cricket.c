/*
Cricket Score Board
*/

#include <stdio.h>

struct Cricketer
{
    int run;
    int wic;
    int cat;
    int id;
    char name[20];
    char country[20];
    int rate;
};

int main()
{
    int n,i,sumrun=0,sumwic=0,sumcat=0;
    int maxrun=0,maxwic=0,maxcat=0;
    int runindex,wicindex,catindex;
    printf("How many players? :");
    scanf("%d",&n);
    struct Cricketer s[n];

    for(i=0; i<n; i++)
    {
        printf("Enter the runs, wickets, catches, ID, Name, Country of the player %d :",i+1);
        scanf("%d %d %d %d",&s[i].run,&s[i].wic,&s[i].cat,&s[i].id);
        gets(s[i].name);
        gets(s[i].country);
    }

    //printing the info.
    for(i=0; i<n; i++)
    {
        printf("Player %d :\n ",i+1);
        printf("Run=%d\nWicket=%d\nCatch=%d\nID=%d\nName=%s\nCountry=%s\n\n",s[i].run,s[i].wic,s[i].cat,s[i].id,s[i].name,s[i].country);
    }

    //summation
    for(i=0; i<n; i++)
    {
        sumrun+=s[i].run;
        sumwic+=s[i].wic;
        sumcat+=s[i].cat;
    }

    printf("Average:\n");
    printf("Average Run = %lf\n",(double)sumrun/n);
    printf("Average Wicket = %lf\n",(double)sumwic/n);
    printf("Average Catch = %lf\n",(double)sumcat/n);

    for(i=0; i<n; i++)
    {
        if(s[i].run>maxrun)
        {
            maxrun=s[i].run;
            runindex=i;
        }

        if(s[i].wic>maxwic)
        {
            maxwic=s[i].wic;
            wicindex=i;
        }

        if(s[i].cat>maxcat)
        {
            maxcat=s[i].cat;
            catindex=i;
        }
    }

    printf("%s from %s has highest run\n",s[runindex].name,s[runindex].country);
    printf("%s from %s has highest wicket\n",s[wicindex].name,s[wicindex].country);
    printf("%s from %s has highest catch\n",s[catindex].name,s[catindex].country);

    return 0;
}
