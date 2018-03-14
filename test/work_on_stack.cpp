//Õ»²Ù×÷

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        stack<int> s;
        for(int i=0; i<n; i++)
        {
            char command;
            cin>>command;
            if(command == 'A')
            {
                if(s.empty())
                {
                    cout<<"E"<<endl;
                }
                else
                {
                    int temp = s.top();
                    cout<<temp<<endl;
                }
            }
            else if(command == 'O')
            {
                if(!s.empty())
                {
                    s.pop();
                }

            }
            else if(command == 'P')
            {
                int temp;
                cin>>temp;
                s.push(temp);
            }
        }
        cout<<endl;
    }
}
