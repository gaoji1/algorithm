//小明搬运水果
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            q.push(temp);
        }
        int sum = 0;
        for(int i=0;i<n-1;i++)
        {
            int temp1 = q.top();
            q.pop();
            int temp2 = q.top();
            q.pop();
            sum += temp1+temp2;
            q.push(temp1+temp2);
        }
        cout<<sum<<endl;
    }
}
