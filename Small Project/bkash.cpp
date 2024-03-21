#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    cout<<"\t\t\tWelcome\nChoice your operation.\n\t1.Check Balence\n\t2.Send Money\n\t3.cash out\n\t4.Contact us\n";
    int n,balance=1000,pin=1234,p,amount;
    char num[10];

    int tran=5;
    while(tran-->0)
    {
        cout<<"Enter operation:";
        cin>>n;
        switch(n)
        {
        case 1:
            cout<<"Enter pin:";
            cin>>p;
            if(p==pin) cout<<balance<<endl;
            else cout<<"Invalid pin"<<endl;
            break;

        case 2:
            cout<<"Enter Receiver number:01";
            cin>>num;
            if(strlen(num) != 9) cout<<"Invalid receiver number"<<endl;
            else
            {
                cout<<"Enter amount:";
                cin>>amount;
                if(balance>amount)
                {
                    cout<<"Enter pin:";
                    cin>>p;
                    if(p != pin) cout<<"Invalid Pin"<<endl;
                    else
                    {
                        balance-=amount;
                        cout<<"Taka "<<amount<<"has sent to 01"<<num<<"sucessfully."<<endl;
                    }
                }
                else cout<<"Insufficient Balance"<<endl;
            }
            break;

        case 3:
            cout<<"Enter Agent number number:01";
            cin>>num;
            if(strlen(num) != 9) cout<<"Invalid Agent number"<<endl;
            else
            {
                cout<<"Enter amount:";
                cin>>amount;
                if(balance>amount)
                {
                    cout<<"Enter pin:";
                    cin>>p;
                    if(p != pin) cout<<"Invalid Pin"<<endl;
                    else
                    {
                        balance-=amount;
                        cout<<"Cash out Taka "<<amount<<"is sucessful to agent 01"<<num<<endl;
                    }
                }
                else cout<<"Insufficient Balance"<<endl;
            }
            break;

        case 4:
            cout<<"Mail at deltatanvir2002@gmail.com or contact at 01742281703"<<endl;
            break;

        default:
            cout<<"Invalide command"<<endl;

        }

    }
    cout<<"No more transjections for today"<<endl;
    return 0;
}
