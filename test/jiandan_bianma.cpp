#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{

    string s;
    while(getline(cin,s)  && s!="ENDOFINPUT")
    {
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='F' && s[i]<='Z')
            {
                s[i] = s[i] - 5;
            }
            else if(s[i]>='A' && s[i]<='E')
            {
                s[i] = s[i] + 24 -3;
            }
        }
        cout<<s<<endl;
        getline(cin,s);
    }
}
