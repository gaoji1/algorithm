#include<iostream>
using namespace std;

int main()
{
    int A;
    int B;
    while(cin>>A>>B)
    {
        int minnum = min(A,B);
        for(int i=minnum;i>=1;i--)
        {
            if(A%i==0 && B%i==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
