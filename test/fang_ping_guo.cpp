#include<iostream>
using namespace std;


int main()
{
    int M;
    int N;
    while(cin>>M>>N)
    {
        int result[M+1][N+1];
        for(int i=0;i<=M;i++)
        {
            result[i][0] = 0;
        }
        for(int i=0;i<=N;i++)
        {
            result[0][i] = 1;
        }
        result[0][0] = 1;
        for(int i=1;i<=M;i++)
        {
            for(int j=1;j<=N;j++)
            {
                if(i<j)
                {
                    result[i][j] = result[i][i];
                }
                else
                {
                    result[i][j] = result[i][j-1] + result[i-j][j];
                }
            }
        }
        cout<<result[M][N]<<endl;

    }
}

