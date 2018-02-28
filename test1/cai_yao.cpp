//≤ÀÎ»
#include<iostream>
using namespace std;

int main()
{
    int t;
    int m;
    while(cin>>t>>m)
    {
        int cost[m];
        int value[m];
        for(int i=0;i<m;i++)
        {
            int tempcost;
            int tempvalue;
            cin>>tempcost>>tempvalue;
            cost[i] = tempcost;
            value[i] = tempvalue;
        }
        int result[t+1][m];
        for(int i=0;i<t+1;i++)
        {
            result[i][0] = 0;
            if(cost[0] <= i)
            {
                for(int j=i;j<t+1;j++)
                {
                    result[j][0] = value[0];
                }
                break;
            }
        }
        for(int i=0;i<m;i++)
        {
            result[0][i] = 0;
        }
        for(int i=1;i<t+1;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(cost[j] > i)
                {
                    result[i][j] = result[i][j-1];
                }
                else
                {
                    int tempa = result[i][j-1];
                    int tempb = result[i-cost[j]][j-1] + value[j];
                    int tempmax = max(tempa,tempb);
                    result[i][j] = tempmax;
                }
            }
        }
        cout<<result[t][m-1]<<endl;

    }
}
