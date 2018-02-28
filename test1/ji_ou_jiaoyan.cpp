//∆Ê≈º–£—È
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

int num_of_one(char tempchar)
{
    int tempa = (int)tempchar;
    int sum = 0;
    for(int i=0; i<8; i++)
    {
        int a = (tempa>>i)&1;
        if(a == 0)
        {

        }
        else
        {
            sum++;
        }
    }
    return sum;
}

string ten_two(int n)
{
    string result = "";
    while(n>0)
    {
        stringstream ss;
        int temp = n%2;
        string tempa;
        n = n/2;
        ss<<temp;
        ss>>tempa;
        result = result + tempa;
    }
    reverse(result.begin(),result.end());
    return result;
}
int main()
{
    string input;
    while(cin>>input)
    {
        for(int i=0; i<input.size(); i++)
        {
            char tempchar = input[i];
            int num = num_of_one(tempchar);
            if(num%2 == 0)
            {
                int temp = (int)tempchar;
                temp = temp + 128;
                string result = ten_two(temp);
                cout<<result<<endl;

            }
            else
            {
                int temp = (int)tempchar;
                string result = ten_two(temp);
                for(int i=0;i<8-result.size();i++)
                {
                    cout<<"0";
                }
                cout<<result<<endl;
            }

        }
    }
}
