//A+B加完后转换进制
#include<iostream>
#include<algorithm>
using namespace std;

string comvert(int m,int input)
{
    string output = "";
    while(input != 0)
    {
        int temp = input%m;
        input = input/m;
        output += '0' + temp;
    }
    reverse(output.begin(),output.end());
    return output;
}

string add(int m,string a,string b)
{
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    string output = "";
    int lena = a.length();
    int lenb = b.length();
    if(lena > lenb)
    {
        for(int i=0;i<lena-lenb;i++)
        {
            b += '0';
        }
    }
    else
    {
        for(int i=0;i<lenb-lena;i++)
        {
            a += '0';
        }
    }
    int jinwei = 0;
    for(int i=0;i<a.length();i++)
    {
        int temp = jinwei + (a[i]-'0') + (b[i]-'0');
        if(temp >= m)
        {
            jinwei = 1;
            temp = temp - m;
        }
        else
        {
            jinwei = 0;
        }
        output += '0' + temp;
    }
    if(jinwei == 1)
    {
        output += '1';
    }
    reverse(output.begin(),output.end());
    if(output.length() == 0)
    {
        return "0";
    }
    else
    {
        return output;
    }
}

int main()
{
    int m;
    while(cin>>m && m)
    {
        int a,b;
        cin>>a>>b;
        string stra = comvert(m,a);
        string strb = comvert(m,b);
        string out = add(m,stra,strb);

        cout<<out<<endl;


    }
}
