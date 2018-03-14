#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int input[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int temp;
                cin>>temp;
                input[i][j] = temp;
            }
        }
        for(int k=0;k<n;k++)
        {
            int biggest = k;
            for(int i=k;i<n;i++)
            {
                if(input[i][k] >= input[biggest][k])
                {
                    biggest = i;
                }
            }
            for(int i=0;i<n;i++)
            {
                int temp = input[biggest][i];
                input[biggest][i] = input[k][i];
                input[k][i] = temp;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cout<<input[i][j]<<" ";
            }
            cout<<input[i][n-1];
            cout<<endl;
        }
    }
}
