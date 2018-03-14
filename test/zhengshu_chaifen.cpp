//ÕûÊı²ğ·Ö
//f(2m) = f(2m+1)
//f(2m) = f(2m-1) + f(m)
#include<iostream>
#include<vector>
using namespace std;

int result[1000001];


int main()
{
    int n;

    result[1] =1;
    result[0] = 1;
    for(int i=2; i<1000001;i++)
    {
        if(i%2 == 0)
        {
            result[i] = (result[i/2]+result[i-1])%1000000000;
        }
        else
        {
            result[i] = result[i-1]%1000000000;
        }
    }
    while(cin>>n)
    {
        cout<<result[n]<<endl;
    }
}
