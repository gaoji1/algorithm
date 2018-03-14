//盈数和完数
#include<iostream>
#include<vector>
using namespace std;

int judge(int n)
{
    int sum = 0;
    for(int i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            sum += i;
        }
    }
    if(sum > n)
    {
        return 1;
    }
    else if(sum == n)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int> E;
    vector<int> G;
    for(int i=2;i<=60;i++)
    {
        int temp = judge(i);
        if(temp == 0)
        {
            E.push_back(i);
        }
        else if(temp == 1)
        {
            G.push_back(i);
        }
    }
    cout<<"E: ";
    for(int i=0;i<E.size()-1;i++)
    {
        cout<<E[i]<<" ";
    }
    cout<<E[E.size()-1]<<endl;
    cout<<"G: ";
    for(int i=0;i<G.size()-1;i++)
    {
        cout<<G[i]<<" ";
    }
    cout<<G[G.size()-1]<<endl;
}
