//2µÄÃÝ´Î·½
#include<iostream>
using namespace std;

int getbit(int n,int i)
{
    return (n>>i)&1;
}

void print(int n)
{
    bool first = true;
    for(int i=15; i>=0; i--)
    {
        int tempa = getbit(n,i);
        if(tempa != 0)
        {
            if(first)
            {
                first = false;
            }
            else
            {
                cout<<"+";
            }
            if(i == 0)
            {
                cout<<"2(0)";
            }
            else if(i == 1)
            {
                cout<<"2";
            }
            else
            {
                cout<<"2(";
                print(i);
                cout<<")";
            }
        }

    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        print(n);
        cout<<endl;
    }
}
