//最简真分数
#include<iostream>
using namespace std;

bool judge(int a,int b)
{
    if(a>b)
    {
        if(b == 1)
        {
            return true;
        }
        else
        {
            for(int i=2;i<=b;i++)
            {
                if(a%i==0 && b%i==0)
                {
                    return false;
                }
            }
            return true;
        }
    }
    else if(a<b)
    {
       if(a == 1)
        {
            return true;
        }
        else
        {
            for(int i=2;i<=a;i++)
            {
                if(a%i==0 && b%i==0)
                {
                    return false;
                }
            }
            return true;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    while(cin>>n && n)
    {
        int input[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            input[i] = temp;
        }
        int number = 0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(judge(input[i],input[j]))
                {
                    number++;
                }
                else
                {

                }
            }
        }
        cout<<number<<endl;

    }
}
