//最大上升子序列和
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> input;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            input.push_back(temp);
        }
        int result[n];
        int last[n];
        result[0] = input[0];
        last[0] = input[0];
        for(int i=1;i<n;i++)
        {
            int biggest = input[i];
            for(int j=0;j<i;j++)
            {
                int len = result[j];
                if(input[j] < input[i])
                {
                    len +=input[i];
                }
                else
                {
                    len = 0;
                }
                if(len > biggest)
                {
                    biggest = len;
                }
            }
            result[i] = biggest;
        }
        int output = 0;
        for(int i=0;i<n;i++)
        {
            if(output < result[i])
            {
                output = result[i];
            }
        }
        cout<<output<<endl;

    }
}
