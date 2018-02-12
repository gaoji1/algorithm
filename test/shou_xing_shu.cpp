#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int sq = n*n;
        sq = sq%100;
        if(sq == n)
        {
            cout<<"Yes!"<<endl;
        }
        else
        {
            sq = sq%10;
            if(sq == n)
            {
                cout<<"Yes!"<<endl;
            }
            else
            {
                cout<<"No!"<<endl;
            }

        }
    }
}
