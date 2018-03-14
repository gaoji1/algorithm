//¾ØÕó×ªÖÃ
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
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int temp = input[i][j];
                input[i][j] = input[j][i];
                input[j][i] = temp;
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
