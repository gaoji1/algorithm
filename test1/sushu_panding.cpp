//ËØÊıÅĞ¶¨
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n<=1)
        {
            cout<<"no"<<endl;
            continue;
        }
        int flag = 1;
        for(int i=2;i<n;i++)
        {
            if(n%i == 0)
            {
                cout<<"no"<<endl;
                flag = 0;
                break;
            }

        }
        if(flag == 1)
            {
                cout<<"yes"<<endl;
            }
            else
            {

            }

    }
}
