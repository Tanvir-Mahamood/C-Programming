#include <stdio.h>
int main()
{
    FILE *fi;
    fi=fopen("test.doc","w");

    if(fi==NULL) printf("file does not exist");
    else
    {
        printf("file is opened");
        fclose(fi);
    }
    return 0;
}
