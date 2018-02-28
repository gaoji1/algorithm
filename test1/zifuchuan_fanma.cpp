//×Ö·û´®·´Âë
#include<iostream>
using namespace std;

int main()
{
    string input;
    while(cin>>input)
    {
        if(input == "!")
        {
            return 0;
        }
        for(int i=0;i<(int)input.length();i++)
        {
            if(input[i]>='a'&&input[i]<='z')
            {
                input[i] = 'z'-(input[i]-'a');
            }
            else if(input[i]>='A'&&input[i]<='Z')
            {
                input[i] = 'Z'-(input[i]-'A');
            }
            else
            {

            }
        }
        cout<<input<<endl;
    }
}
