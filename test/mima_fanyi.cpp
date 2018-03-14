//ÃÜÂë·­Òë

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    while(getline(cin,input))
    {
        for(int i=0;i<input.length();i++)
        {
            if(input[i] == 'z')
            {
                input[i] = 'a';
            }
            else if(input[i] == 'Z')
            {
                input[i] = 'A';
            }
            else if( (input[i]>='a'&&input[i]<'z') || (input[i]>='A'&&input[i]<'Z') )
            {
                input[i] += 1;
            }
        }
        cout<<input<<endl;
    }
}
