//ÍêÊı
#include<iostream>
#include<vector>
using namespace std;


bool judge(int n)
{
    int sum = 0;
    for(int i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            sum += i;
        }
    }
    if(sum == n)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> output;
        for(int i=1;i<=n;i++)
        {
            if(judge(i))
            {
                output.push_back(i);
            }
        }
        for(int i=0;i<output.size()-1;i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<output[output.size()-1]<<endl;
    }
}
