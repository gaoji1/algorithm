//µÚk¸öËØÊı
#include<iostream>
using namespace std;

int prime[10001];
bool judge[1000100];

int main()
{
    int i = 1;
    for(int j=0;j<1000100;j++)
    {
        judge[j] = true;
    }
    for(int j=2;j<1000100;j++)
    {
        if(judge[j] == true)
        {
            prime[i++] = j;
            for(int m=j*2;m<1000100;m += j)
            {
                judge[m] = false;
            }
        }
    }

    int k;
    while(cin>>k)
    {

        cout<<prime[k]<<endl;
    }
}
