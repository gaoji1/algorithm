//ผฆอรอฌมý
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n%2 != 0)
        {
            cout<<"0 0"<<endl;
            continue;
        }
        else
        {
            int maxnum = n/2;
            int minnum = (n%4)/2 + n/4;
            cout<<minnum<<" "<<maxnum<<endl;
        }
    }
}
