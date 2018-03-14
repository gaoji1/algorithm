//ÅÅÐò£¨´ò¿¨ÄÑ¶È£©
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int input[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            input[i] = temp;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>i;j--)
            {
                if(input[j] < input[j-1])
                {
                    int temp = input[j];
                    input[j] = input[j-1];
                    input[j-1] = temp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<input[i]<<" ";
        }
        cout<<endl;
    }
}
