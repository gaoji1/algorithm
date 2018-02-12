#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    int C;
    int N;
    while(cin>>C>>N)
    {
        vector<int> price;
        vector<int> grade;
        int result[N][C+1];

        for(int i=0;i<N;i++)
        {
            int temp;
            cin>>temp;
            price.push_back(temp);
            cin>>temp;
            grade.push_back(temp);
        }
        for(int i=0;i<=C;i++)
        {
            if(price[0]<=i)
            {
                for(int j=i;j<=C;j++)
                {
                    result[0][j] = grade[0];
                }
                break;
            }
            else
            {
                result[0][i] = 0;
            }
        }
        for(int i=1;i<N;i++)
        {
            for(int j=0;j<=C;j++)
            {
                if(price[i] > j)
                {
                    result[i][j] = result[i-1][j];
                }
                else
                {
                    int tempA = result[i-1][j-price[i]] + grade[i];
                    int tempB = result[i-1][j];
                    int maxnum = max(tempA,tempB);
                    result[i][j] = maxnum;

                }
            }
        }
        cout<<result[N-1][C]<<endl;



    }
}
