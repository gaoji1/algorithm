#include<iostream>
using namespace std;

int main()
{
    int firstnum;
    int secondnum;
    char operation;
    while(cin>>firstnum>>operation)
    {
        if(operation == '!')
        {
            int output = 1;
            for(int i=1;i<=firstnum;i++)
            {
                output *= i;
            }
            cout<<output<<endl;
        }
        else if(operation == '+')
        {
            cin>>secondnum;
            cout<<firstnum+secondnum<<endl;
        }
        else if(operation == '-')
        {
            cin>>secondnum;
            cout<<firstnum-secondnum<<endl;
        }
        else if(operation == '*')
        {
            cin>>secondnum;
            cout<<firstnum*secondnum<<endl;
        }else if(operation == '/')
        {
            cin>>secondnum;
            if(secondnum == 0)
            {
                cout<<"error"<<endl;
            }
            else
            {
                cout<<firstnum/secondnum<<endl;
            }
        }
        else if(operation == '%')
        {
            cin>>secondnum;
            if(secondnum == 0)
            {
                cout<<"error"<<endl;
            }
            else
            {
                int temp = firstnum%secondnum;
                cout<<temp<<endl;
            }
        }
    }
}
