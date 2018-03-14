//n的阶乘
//大数运算用java方便一些
#include<iostream>
using namespace std;

int result[1001];
int main()
{
    int n;
    result[0] = 1;
    result[1] = 1;
    for(int i=2;i<1001;i++)
    {
        result[i] = result[i-1] * i;
    }
    while(cin>>n)
    {
        cout<<result[n]<<endl;
    }
}
