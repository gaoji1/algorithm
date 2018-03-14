//∞Ÿº¶Œ Ã‚
#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int result[101][101];
        if(100*0.333333333333333333333 >n)
        {
            continue;
        }
        for(int i=0;i<101;i++)
        {
            for(int j=0;j<101;j++)
            {
                if(i+j>100 || 5*i+3*j>n)
                {
                    result[i][j] = -1;
                }
                else
                {
                    int temp = 100 - i - j;
                    if(temp*0.33333333333333 +5*i +3*j <= n)
                    {
                        result[i][j] = temp;
                    }
                    else
                    {
                        result[i][j] = -1;
                    }
                }
            }
        }

        for(int i=0;i<101;i++)
        {
            for(int j=0;j<101;j++)
            {
                if(result[i][j] != -1)
                {
                    cout<<"x="<<i<<",y="<<j<<",z="<<result[i][j]<<endl;
                }
            }
        }
    }
}
