//ÖÚÊı
#include<iostream>
using namespace std;

int main()
{

        int num[11];
        for(int i=1;i<=10;i++)
        {
            num[i] = 0;
        }
        for(int i=0;i<20;i++)
        {
            int temp;
            cin>>temp;
            num[temp]++;
        }
        int maxnum = 0;
        int numebr = 0;
        for(int i=1;i<=10;i++)
        {
            if(num[i] > numebr)
            {
                numebr = num[i];
                maxnum = i;
            }
        }
        cout<<maxnum<<endl;

}
