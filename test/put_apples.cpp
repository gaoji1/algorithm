//放苹果，经典动态规划与经典递归算法
//https://www.nowcoder.com/practice/a2a1d0266629404fba582d416d84b6a0?tpId=40&tqId=21392&tPage=7&rp=7&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            dp[i][1] = 1;
        }
        for(int i=0;i<=n;i++)
        {
            dp[0][i] = 1;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=2;j<=n;j++)
            {
                if(i<j)
                {
                    dp[i][j] = dp[i][i];
                }
                else
                {
                    dp[i][j] = dp[i][j-1] + dp[i-j][j];
                }
            }
        }
        cout<<dp[m][n]<<endl;
    }
}
