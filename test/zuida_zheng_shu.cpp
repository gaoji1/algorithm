#include<iostream>
using namespace std;

int main()
{
    int temp;
    while(cin>>temp)
    {
        int biggest = temp;
        for(int i=1;i<10;i++)
        {
            cin>>temp;
            if(temp > biggest)
            {
                biggest = temp;
            }
        }
        cout<<"max="<<biggest<<endl;
    }
}
