#include<iostream>
using namespace std;

int main()
{
    string input;
    while(cin>>input)
    {
        int outputs[26] = {0};
        for(int i=0;i<(int)input.size();i++)
        {
            if(input[i]>='A' && input[i]<='Z')
            {
                int temp = input[i] - 'A';
                outputs[temp]++;
            }
        }
        for(int i=0;i<26;i++)
        {
            char temp = 'A' + i;
            cout<<temp<<":"<<outputs[i]<<endl;
        }
    }
}
