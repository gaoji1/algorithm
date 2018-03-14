//IPµÿ÷∑
#include<iostream>
using namespace std;

bool judge(int n)
{
    return n>=0&&n<=255;
}

int main()
{
    int a,b,c,d;
    while(scanf("%d.%d.%d.%d",&a,&b,&c,&d) != EOF)
    {
        if(judge(a) && judge(b) && judge(c) && judge(d))
        {
            cout<<"Yes!"<<endl;
        }
        else
        {
            cout<<"No!"<<endl;
        }
    }
}
