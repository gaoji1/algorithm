//�ж�������(���,�۽�,ֱ��)
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
            cout<<"���������"<<endl;
        }else if(result == 0)
        {
            cout<<"ֱ��������"<<endl;
        }
        else
        {
            cout<<"�۽�������"<<endl;
        }
    }
}
