//A+B
#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string input1;
    string input2;
    while(cin>>input1>>input2)
    {

        for(int i=0;i<input1.length();i++)
        {
            if(input1[i] == ',')
            {
                input1.erase(i,1);
                i--;
            }
        }
        for(int i=0;i<input2.length();i++)
        {
            if(input2[i] == ',')
            {
                input2.erase(i,1);
                i--;
            }
        }
        if(input1[0] == '-' && input2[0] == '-')
        {
            stringstream ss1;
            stringstream ss2;
            int temp1;
            int temp2;
            ss1<<input1.substr(1,input1.size());
            ss2<<input2.substr(1,input2.size());
            ss1>>temp1;
            ss2>>temp2;
            cout<<"-"<<temp1+temp2<<endl;
        }
        else if(input1[0] == '-' && input2[0]!='-')
        {
            stringstream ss1;
            stringstream ss2;
            int temp1;
            int temp2;
            ss1<<input1.substr(1,input1.size());
            ss2<<input2.substr(0,input2.size());
            ss1>>temp1;
            ss2>>temp2;
            if(temp2 - temp1 >= 0)
            {
                cout<<temp2-temp1<<endl;
            }
            else
            {
                cout<<temp2-temp1<<endl;
            }
        }
        else if(input1[0]!='-' && input2[0]=='-')
        {
            stringstream ss1;
            stringstream ss2;
            int temp1;
            int temp2;
            ss1<<input1.substr(0,input1.size());
            ss2<<input2.substr(1,input2.size());
            ss1>>temp1;
            ss2>>temp2;
            if(temp1 - temp2 >= 0)
            {
                cout<<temp1-temp2<<endl;
            }
            else
            {
                cout<<temp1-temp2<<endl;
            }
        }
        else
        {
            stringstream ss1;
            stringstream ss2;
            int temp1;
            int temp2;
            ss1<<input1.substr(0,input1.size());
            ss2<<input2.substr(0,input2.size());
            ss1>>temp1;
            ss2>>temp2;
            cout<<temp1+temp2<<endl;
        }
    }
}
