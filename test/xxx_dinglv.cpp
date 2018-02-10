#include<iostream>
using namespace std;

int  main()
{
    int n;
    while(cin>>n)
    {
        if(n == 0)
        {
            return -1;
        }
        int num = 0;
        while(n != 1)
        {
            if(n%2 == 0)
            {
                num++;
                n = n/2;
            }
            else
            {
                num++;
                n = 3*n+1;
                n = n/2;
            }
        }
        cout<<num<<endl;
    }
}
