// Antifactorial in C++
#include <iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    int i,sum,flag=0;
    i=sum=1;
    while(sum<=num)
    {

        sum=sum*i;
        if(sum==num)
        {
            flag=1;
            cout<<i<<endl;
            break;
        }
        i++;
    }
    if(flag==0)
    cout<<"Not Possible"<<endl;

    return 0;
}
