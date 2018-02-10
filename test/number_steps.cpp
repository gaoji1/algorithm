#include<iostream>

using namespace std;

int main()
{
    int x;
    int y;
    while(cin>>x>>y)
    {
        int myx = 0;
        int myy = 0;
        int number = 0;
        if(myx==x && myy==y)
        {
            cout<<number<<endl;
            break;
        }

        while(myx<=5000 && myy<=5000)
        {
            //1
            myx += 1;
            myy += 1;
            number += 1;
            if(myx==x && myy==y)
            {
                cout<<number<<endl;
                break;
            }
            //2
            myx += 1;
            myy += -1;
            number +=1;
            if(myx==x && myy==y)
            {
                cout<<number<<endl;
                break;
            }
            //3
            myx += 1;
            myy += 1;
            number +=1;
            if(myx==x && myy==y)
            {
                cout<<number<<endl;
                break;
            }
            //4
            myx += -1;
            myy += 1;
            number += 1;
            if(myx==x && myy==y)
            {
                cout<<number<<endl;
                break;
            }
        }
        if(myx>5000 || myy>5000)
        {
            cout<<"No Number"<<endl;
        }
    }
}
