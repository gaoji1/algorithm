#include<iostream>
using namespace std;
int myset[10001];

int findx(int x)
{
    int i = x;
    while(myset[i] != i)
    {
        i = myset[i];
    }
    return i;
}
int merge(int x,int y)
{
    int i,j;
    i = findx(x);
    j = findx(y);
    if(i == j)
    {
        return 0;
    }
    else
    {
        myset[j] = i;
    }
    return 1;
}

int main()
{
    int city;
    int road;
    while(cin>>city && city!=0)
    {
        cin>>road;

        for(int i=1;i<=city;i++)
        {
            myset[i] = i;
        }
        for(int i=0;i<road;i++)
        {
            int x,y;
            cin>>x;
            cin>>y;
            merge(x,y);
        }
        int num = -1;
        for(int i=1;i<=city;i++)
        {
            if(myset[i] == i)
            {
                num++;
            }
        }
        cout<<num<<endl;
    }
}
