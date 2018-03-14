//´Ó×Ö·û´®sÖÐÒÆ³ý×Ö·û´®c
#include<iostream>
using namespace std;

int main()
{
    string s;
    char c;
    while(cin>>s>>c)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == c)
            {
                continue;
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}
