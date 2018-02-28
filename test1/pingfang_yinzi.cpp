//平方因子
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int k = 2;
        int flag = 0;
        while(k<n)
        {
            if(n%(k*k) == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                k++;
            }
        }
        if(flag == 1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
