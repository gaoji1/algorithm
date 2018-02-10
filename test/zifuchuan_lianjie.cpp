#include<iostream>
using namespace std;

int main()
{
    string str1;
    string str2;
    while(cin>>str1>>str2)
    {
        string costr = str1 + str2;
        cout<<costr<<endl;
    }
}
