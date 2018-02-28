//最大最小值
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int biggest = -100000;
        int smallest = 100000;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(biggest < temp)
            {
                biggest = temp;
            }
            if(smallest > temp)
            {
                smallest = temp;
            }
        }
        cout<<biggest<<" "<<smallest<<endl;

    }
}
