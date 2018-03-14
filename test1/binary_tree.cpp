//¶ş²æÊ÷
#include<iostream>
using namespace std;

int number;

void pre_order(int m,int n)
{
    if(m<=n)
    {
        number++;
        pre_order(m*2,n);
        pre_order(m*2+1,n);
    }
}
int main()
{
    int n,m;
    while(cin>>m>>n)
    {
        number = 0;
        pre_order(m,n);
        cout<<number<<endl;
    }
}
