#include<iostream>
using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
        int col[5];
        for(int i=0;i<5;i++)
        {
            int temp;
            cin>>temp;
            col[i] = temp;
        }
        int sum = 0;
        for(int i=0;i<5;i++)
        {
            if(col[i] < a)
            {
                sum += col[i];
            }
        }
        cout<<sum<<endl;
    }
}
