//与7无关的数
#include<iostream>
using namespace std;

bool judge1(int i)
{
    if(i%7 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool judge2(int i)
{
    while(i>0)
    {
        int tempa = i%10;
        i = i/10;
        if(tempa == 7)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int sum = 0;
        for(int i=0;i<=n;i++)
        {
            if(!judge1(i) && !judge2(i))
            {
                sum += i*i;
            }
        }
        cout<<sum<<endl;
    }
}
