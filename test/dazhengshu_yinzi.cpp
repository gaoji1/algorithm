//大整数因子
#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool judge(string bigInt,int n)
{
    int pre = 0;
    for(int i=0;i<bigInt.length();i++)
    {
        int temp = pre*10 + bigInt[i]-'0';
        pre = temp%n;
    }
    if(pre == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string bigInt;
    while(cin>>bigInt)
    {
        vector<int> output;
        for(int i=2;i<=9;i++)
        {
            if(judge(bigInt,i))
            {
                output.push_back(i);
            }
        }
        if(output.size() == 0)
        {
            cout<<"none"<<endl;
        }
        else
        {
            for(int i=0;i<output.size()-1;i++)
            {
                cout<<output[i]<<" ";
            }
            cout<<output[output.size()-1]<<endl;
        }

    }
}
