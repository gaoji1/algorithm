//判断三角形(锐角,钝角,直角)
#include<iostream>
using namespace std;

int judge(int a,int b,int c)
{
    int maxedge = max(a,b);
    maxedge = max(maxedge,c);
    int minedge = min(a,b);
    minedge = min(minedge,c);
    int midedge = a+b+c-maxedge-minedge;
    if(midedge*midedge+minedge*minedge > maxedge*maxedge)
    {
        return 1;
    }else if(midedge*midedge+minedge*minedge == maxedge*maxedge)
    {
        return 0;
    }
    else
    {
        return 3;
    }
}

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int result = judge(a,b,c);
        if(result == 1)
        {
            cout<<"锐角三角形"<<endl;
        }else if(result == 0)
        {
            cout<<"直角三角形"<<endl;
        }
        else
        {
            cout<<"钝角三角形"<<endl;
        }
    }
}
