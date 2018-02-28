//Î»²Ù×÷Á·Ï°
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;



string ten_to_two(int x)
{
    string output = "";
    while(x != 0)
    {
        int yushu = x%2;
        x = x/2;
        string temp;
        stringstream ss;
        ss<<yushu;
        ss>>temp;
        output = output + temp;
    }
    if(output.length()<16)
    {
        for(int i=0;i<=16-output.length();i++)
        {
            output  = output + "0";
        }
    }
    reverse(output.begin(),output.end());
    return output;
}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        string a = ten_to_two(n);
        string b = ten_to_two(m);

        if(a.length() > b.length())
        {
            a = a + a;
            if(a.find(b) != string::npos)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            b = b + b;
            if(b.find(a) != string::npos)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }
}
