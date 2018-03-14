//打印极值点下标
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int input[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            input[i] = temp;
        }
        vector<int> output;
        for(int i=0;i<n;i++)
        {
            if(i == 0)
            {
                if(input[i] != input[i+1])
                {
                    output.push_back(i);
                }
            }
            else if(i == n-1)
            {
                if(input[i] != input[i-1])
                {
                    output.push_back(i);
                }
            }
            else
            {
                if( (input[i]>input[i-1]&&input[i]>input[i+1]) || (input[i]<input[i-1]&&input[i]<input[i+1]) )
                {
                    output.push_back(i);
                }
            }
        }
        for(int i=0;i<output.size()-1;i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<output[output.size()-1]<<endl;
    }
}
