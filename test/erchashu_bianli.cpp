#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<char> backorder;

void build(string pre,string mid)
{

    if(pre.length() == 0)
    {
        return;
    }
    if(pre.length() == 1)
    {
        backorder.push_back(pre[0]);
        return;
    }
    backorder.push_back(pre[0]);
    int flag = 0;
    for(int i=0;i<mid.length();i++)
    {
        if(mid[i] == pre[0])
        {
            flag = i;
        }
    }

    if(flag == 0)
    {
        build(pre.substr(flag+1,pre.length()),mid.substr(flag+1,mid.length()));
    }
    else if(flag == pre.length()-1)
    {
        build(pre.substr(1,flag),mid.substr(0,flag));
    }
    else
    {
        build(pre.substr(flag+1,pre.length()),mid.substr(flag+1,mid.length()));
        build(pre.substr(1,flag),mid.substr(0,flag));
    }



}

int main()
{
    string preorder;
    string midorder;
    while(cin>>preorder>>midorder)
    {
        build(preorder,midorder);
        for(int i=backorder.size()-1;i>=0;i--)
        {
            cout<<backorder[i];
        }
        cout<<endl;
    }
}
