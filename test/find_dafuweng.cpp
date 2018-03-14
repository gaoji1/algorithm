//Ñ°ÕÒ´ó¸»ÎÌ

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int input[n];
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            input[i] = temp;
        }

        if(m>=n)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=n-1; j>i; j--)
                {
                    if(input[j] > input[j-1])
                    {
                        int temp = input[j];
                        input[j] = input[j-1];
                        input[j-1] = temp;
                    }
                }
            }
            for(int i=0; i<n-1; i++)
            {
                cout<<input[i]<<" ";
            }
            cout<<input[n-1]<<endl;
        }
        else
        {
            for(int i=0; i<m; i++)
            {
                for(int j=n-1; j>i; j--)
                {
                    if(input[j] > input[j-1])
                    {
                        int temp = input[j];
                        input[j] = input[j-1];
                        input[j-1] = temp;
                    }
                }
            }
            for(int i=0; i<m-1; i++)
            {
                cout<<input[i]<<" ";
            }
            cout<<input[m-1]<<endl;
        }
    }
}
