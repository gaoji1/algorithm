#include<iostream>
using namespace std;

int main()
{
    string num1;
    string num2;
    while(cin>>num1>>num2)
    {
        int sum = 0;
        for(int i=0;i<(int)num1.size();i++)
        {
            int temp1 = num1[i] - '0';
            for(int j=0;j<(int)num2.size();j++)
            {
                int temp2 = num2[j] - '0';
                sum = sum + temp1 * temp2;
            }
        }
        cout<<sum<<endl;

    }
}
