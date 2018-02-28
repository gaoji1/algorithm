#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input1;
    string input2;
    while(getline(cin,input1) && input1!="#")
    {
        getline(cin,input2);
        for(int i=0;i<(int)input1.size();i++)
        {
            char target = input1[i];
            int num = 0;
            for(int j=0;j<(int)input2.size();j++)
            {
                if(input2[j] == target)
                {
                    num++;
                }
            }
            cout<<target<<" "<<num<<endl;
        }


    }
}
