#include<iostream>
using namespace std;
int eat(int n)
{
    if(n == 1)
    {
        return 1;
    }
    if(n == 2)
    {
        return 2;
    }
    return eat(n-1) + eat(n-2);
}

int main()
{
    int n;
    while(cin>>n)
    {
        cout<<eat(n)<<endl;
    }
}

