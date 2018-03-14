//Ê××ÖÄ¸´óĞ´

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    getline(cin,input);
    if(input[0]>='a' &&input[0]<='z')
    {
        input[0] += -32;
    }
    for(int i=1;i<(int)input.length();i++)
    {
        if(input[i] == ' '||input[i] == '\t'||input[i] == '\n'||input[i] == '\r')
        {
            if(input[i+1]>='a' &&input[i+1]<='z')
            {
                input[i+1] += -32;
            }
        }
    }
    cout<<input<<endl;
}
