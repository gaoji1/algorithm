//公共父节点
#include<iostream>

using namespace std;

int judge(int x,int y)
{
    while(x!=y)
    {
        if(x>y)
        {
            x = x/2;
        }
        else
        {
            y = y/2;
        }
    }
    return x;
}

int main()
{
    int x;
    int y;
    while(cin>>x>>y)
    {
        cout<<judge(x,y)<<endl;
    }
}
