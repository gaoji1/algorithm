//导弹拦截（最长不递增子串）
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> input;
        int maxlen[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            input.push_back(temp);
        }
        maxlen[0] = 1;
        for(int i=1;i<n;i++)
        {
            int len = 1;
            for(int j=0;j<i;j++)
            {
                if(input[j] < input[i])
                {
                    continue;
                }
                else
                {
                    if(maxlen[j]+1 > len)
                    {
                        len = maxlen[j] + 1;
                    }
                }
            }
            maxlen[i] = len;
        }
        int output = 0;
        for(int i=0;i<n;i++)
        {
            if(output < maxlen[i])
            {
                output = maxlen[i];
            }
        }
        cout<<output<<endl;
    }
}
