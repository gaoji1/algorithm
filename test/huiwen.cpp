//ÅĞ¶Ï»ØÎÄ×Ö·û´®
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string input;
    while(cin>>input)
    {
        string temp = input;
        reverse(input.begin(),input.end());
        if(temp == input)
        {
            cout<<"Yes!"<<endl;
        }
        else
        {
            cout<<"No!"<<endl;
        }
    }
}
