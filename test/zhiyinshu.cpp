//ÖÊÒòÊı
#include<iostream>
#include<math.h>
using namespace std;

bool judge(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%2 == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    while(cin>>n)
    {
        int num = 0;
        int temp = n;
        for(int j=2;j<sqrt(n);j++)
        {
            while(n%j == 0)
            {
                n = n/j;
                num++;

            }
            //cout<<n<<" "<<num<<endl;
            if(n<=1)
            {
                break;
            }
        }
        if(n>1)
        {
            num++;
        }
        cout<<num<<endl;
    }
}
