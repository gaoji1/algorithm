#include<iostream>
using namespace std;

int main()
{
    string input;
    while(cin>>input)
    {
        int len = input.length();
        int k,m;
        if((len+2)%3 == 0)
        {
            k = (len+2)/3;
            m = k-1;
        }
        else if((len+2)%3 == 1)
        {
            k = (len+2)/3 + 1;
            m = (len+2)/3 - 1;
        }
        else
        {
            k = (len+2)/3 + 2;
            m = (len+2)/3 - 1;
        }
        for(int i=0;i<m;i++)
        {
            cout<<input[i];
            for(int j=0;j<k-2;j++)
            {
                cout<<" ";
            }
            cout<<input[input.length()-i-1]<<endl;
        }
        cout<<input.substr(m,k)<<endl;

    }
}
