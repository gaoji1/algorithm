//ZOJŒ Ã‚
#include<iostream>
using namespace std;

bool isxzojx(string input)
{
    int n = input.find("zoj");
    if(n == (int)string::npos)
    {
        return false;
    }
    else
    {

        string a = input.substr(0,n);
        string b = input.substr(n+3,input.length());
        if(a == b)
        {
            return true;
        }
        else
        {
            return false;
        }




    }
}

bool isazbojac(string input)
{
    string a = "";
    string b = "";
    string c = "";
    int n = input.find("z");
    if(n == (int)string::npos)
    {
        return false;
    }
    int m = input.find("oj");
    if(m == (int)string::npos)
    {
        return false;
    }
    a = input.substr(0,n);
    b = input.substr(n+1,m);
    c = input.substr(m+2+a.length(),input.length());
    if(isxzojx(a+"z"+b+"j"+c))
    {
        return true;
    }
    else
    {
        return false;
    }


}

int main()
{
    string input;
    while(cin>>input)
    {
        if(input == "zoj")
        {
            cout<<"Accepted"<<endl;
            continue;
        }
        else if(isxzojx(input))
        {
            cout<<"Accepted"<<endl;
            continue;
        }

        else if(isazbojac(input))
        {
            cout<<"Accepted"<<endl;
            continue;
        }
        else
        {
            cout<<"Wrong Answer"<<endl;
            continue;
        }
    }
}
