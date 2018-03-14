//×îÐ¡ÓÊÆ±Êý
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        int cost[n+1];
        int result[n+1][m+1];
        for(int i=1;i<=n;i++)
        {
            int temp;
            cin>>temp;
            cost[i] = temp;
        }
        for(int i=0;i<=n;i++)
        {
            result[i][0] = 0;
        }
        for(int j=1;j<=m+1;j++)
        {
            if(j == cost[1])
            {
                result[1][j] = 1;
            }
            else
            {
                result[1][j] = 9999;
            }
        }
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                result[i][j] = result[i-1][j];
                if(cost[i]<=j && result[i-1][j-cost[i]]+1 < result[i][j] )
                {
                    result[i][j] = result[i-1][j-cost[i]]+1;
                }
            }
        }
        if(result[n][m] == 9999)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<result[n][m]<<endl;
        }


    }
}
