//ÕÒ×îĞ¡Êı

#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n &&n)
    {
        int x = 9999;
        int y = 9999;
        for(int i=0;i<n;i++)
        {
            int tempx;
            int tempy;
            cin>>tempx;
            cin>>tempy;
            if(tempx<x)
            {
                x = tempx;
                y = tempy;
            }
            else if(tempx == x)
            {
                if(tempy < y)
                {
                    x = tempx;
                    y = tempy;
                }
            }
        }
        cout<<x<<" "<<y<<endl;
    }
}
